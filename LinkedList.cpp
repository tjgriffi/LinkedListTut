public class LinkedList{

	private class LinkedListNode{

		LinkedListNode _next;
		int _data;

		public LinkedListNode(int data){
			_data = data;
		}
	}
	
	LinkedListNode head;
	
	//Finds the kth to last node in a linked list
	LinkedListNode kthToLast( LinkedListNode n, int k){
		LinkedListNode curr = n;
		LinkedListNode kBefore = n;
		
		//Get curr k nodes from the first node
		for (int i = 0; i < k; i++){
			if(curr.next == null){
				return ERROR;
			}
			
			curr = curr.next;
		}
		
		while(curr != null){
			curr = curr.next;
			kBefore = kBefore.next;
		}
		
		return kBefore;
	}
	
	//Method to get a number in the form of a LinkedList
	int getNum(LinkedListNode list){
		LinkedListNode curr = list;
		int num = 0;
		int powOfTen = 1;
		while(curr != null){
			num = curr._data * powOfTen;
			curr = curr.next;
			powOfTen *= 10;
		}
		
		return num;
	}
	
	//Method to sum together to numbers in the form of a LinkedList
	LinkedListNode getSum(LinkedListNode list1, LinkedListNode list2){
		int sum = getNum(list1) + getNum(list2);
		LinkedListNode toReturn = new LinkedListNode();
		LinkedListNode curr = toReturn;
		while(sum > 0){
			curr._data = sum%10;
			sum = sum/10;
			if(sum != 0){
				curr._next = new LinkedListNode();
				curr = curr._next;
			}
		}
		
		return toReturn;
	}
}
