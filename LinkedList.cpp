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
}
