package graph;

import java.util.*;

public class dfs {
    static void depth_first_search(graph gr){
        ArrayList<Integer>visited = new ArrayList<Integer>();
        Stack<Integer> exploration = new Stack<Integer>();
        int current_vertex = -1;
        int explored = 1;

        if(!gr.graph.isEmpty()){ //store the initial vertex of the graph
            Set<Integer> keys = gr.graph.keySet();
            Iterator<Integer>it = keys.iterator();
            int initial_vertex = (int)it.next();

            visited.add(initial_vertex);
            exploration.push(initial_vertex);
            current_vertex = initial_vertex;
            System.out.print(current_vertex + "->");
        }

        while(!exploration.isEmpty()){  //explore others
            LinkedList<Integer> ll = gr.graph.get(current_vertex);
            ListIterator<Integer> li = ll.listIterator(0);
            explored = 1;


            while(li.hasNext()){
                int target_vertex = li.next();

                if(!visited.contains(target_vertex)){
                    exploration.push(target_vertex);
                    visited.add(target_vertex);
                    current_vertex = target_vertex;
                    System.out.print(current_vertex+"->");
                    explored = 0;
                    break;
                }
            }

            if(explored == 1){
                exploration.pop();
                if(!exploration.isEmpty()){
                    current_vertex = exploration.peek();
                }
            }
        }
    }

    public static void main(String args[]){
        graph gr1 = new graph();

        gr1.add(1, 2);
        gr1.add(1, 3);
        gr1.add(2, 1);
        gr1.add(2, 4);
        gr1.add(2, 5);
        gr1.add(3, 1);
        gr1.add(3, 5);
        gr1.add(4, 2);
        gr1.add(4, 5);
        gr1.add(5, 2);
        gr1.add(5, 4);

        depth_first_search(gr1);
    }
}
