```java
public class Ex10866 {
    public static void main(String[] args) {
        char deletedItem;
        DQueue DQ = new DQueue();

        DQ.insertFront('A');
        DQ.printDQueue();
        DQ.insertFront('B');
        DQ.printDQueue();
        DQ.insertFront('C');
        DQ.printDQueue();

        deletedItem = DQ.deleteFront();
        if(deletedItem != 0){
            System.out.println("Front deleted Item : " + deletedItem);
        }
        DQ.printDQueue();

        deletedItem = DQ.deleteRear();
        if(deletedItem != 0){
            System.out.println("Rear deleted Item : " + deletedItem);
        }
        DQ.printDQueue();

        DQ.insertRear('D');
        DQ.printDQueue();
        DQ.insertFront('E');
        DQ.printDQueue();
        DQ.insertFront('F');
        DQ.printDQueue();
    }
}

class DQNode{
    char data;
    DQNode rlink;
    DQNode llink;
}

class DQueue{
    DQNode front;
    DQNode rear;

    public DQueue(){
        front = null;
        rear = null;
    }

    public boolean isEmpty(){
        return (front == null);
    }

    public void insertFront(char item){
        DQNode newNode = new DQNode();
        newNode.data = item;
        if(isEmpty()){
            front = newNode;
            rear = newNode;
            newNode.rlink = null;
            newNode.llink = null;
        }else{
            front.llink = newNode;
            newNode.rlink = front;
            front = newNode;
        }
        System.out.println("Front Inserted Item : " + item);
    } // end insertFront()

    public void insertRear(char item){
        DQNode newNode = new DQNode();
        newNode.data = item;
        if(isEmpty()){
            front = newNode;
            rear = newNode;
            newNode.rlink = null;
            newNode.llink = null;
        }else{
            rear.rlink = newNode;
            newNode.rlink = null;
            newNode.llink = rear;
            rear = newNode;
        }
        System.out.println("Rear Inserted Item : " + item);
    } // end insertRear()

    public char deleteFront(){
        if(isEmpty()){
            System.out.println("Front Deleting fail! DQueue is empty!!");
            return 0;
        }else{
            char item = front.data;
            if(front.rlink == null){
                front = null;
                rear = null;
            }else{
                front = front.rlink;
                front.llink = null;
            }
            return item;
        }
    } // end deleteFront()

    public char deleteRear(){
        if(isEmpty()){
            System.out.println("Rear Deleting fail! DQueue is empty!!");
            return 0;
        }else{
            char item = rear.data;
            if(rear.llink == null){
                rear = null;
                front = null;
            }else{
                rear = rear.llink;
                rear.rlink = null;
            }
            return item;
        }
    } // end deleteRear()

    public void removeFront(){
        if(isEmpty()){
            System.out.println("Front Removing fail! DQueue is empty!!");
        }else{
            if(front.rlink == null){
                front = null;
                rear = null;
            }else{
                front = front.rlink;
                front.llink = null;
            }
        }
    } // end removeFront()

    public void removeRear(){
        if(isEmpty()){
            System.out.println("Rear Removing fail! DQueue is empty!!");
        }else{
            if(rear.llink == null){
                rear = null;
                front = null;
            }else{
                rear = rear.llink;
                rear.rlink = null;
            }
        }
    } // end removeRear()

    public char peekFront(){
        if(isEmpty()){
            System.out.println("Front Peeking fail DQueue is empty!!");
            return 0;
        }else{
            return front.data;
        }
    } // end peekFront()

    public char peekRear(){
        if(isEmpty()){
            System.out.println("Rear Peeking fail! DQueue is empty!!");
            return 0;
        }else{
            return rear.data;
        }
    } // end peekRear()

    public void printDQueue(){
        if(isEmpty()){
            System.out.printf("DQueue is empty!! \n \n");
        }else{
            DQNode temp = front;
            System.out.printf("DQueue>> ");
            while (temp != null){
                System.out.printf("%c ", temp.data);
                temp = temp.rlink;
            }
            System.out.println();
            System.out.println();
        }
    } // end printDQueue()
}

```
