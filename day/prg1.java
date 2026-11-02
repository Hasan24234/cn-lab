package day;

public class prg1 {
    static void upperbound(int arr[]){
        int n=arr.length;
        int start=0;
        int end=n-1;
        int ans=0;
        int target=25;

        while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            ans=mid; 
            end=mid-1;

        }
        }
        System.out.println(ans);
        
    }
    public static void main(String args[]){
        System.out.println("hello world");
        int arr[]={10,20,30,40,50,60,70};
        upperbound(arr);
    }
    }
    
