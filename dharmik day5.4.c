 main(){ 
        
          int a;
          int b;
          int c;
          int d;
          int e;
        
             printf("enter is A:");
             scanf("%d",&a);
             
             printf("enter is B:");
             scanf("%d",&b);
             
             printf("enter is c:");
             scanf("%d",&c);
             
             printf("enter is d:");
             scanf("%d",&d);
             
             printf("enter is e:");
             scanf("%d",&e);
              
              if (a<e)
              {
			  
                 printf("A: %d is min");
                 printf("E: %d is min");
                   }
                   
          else if (b<e){
		  
               
                 printf("B:%d is min");
                 printf("D:%d is min");
            }
          else if (e<d) {
		  
		         
				  printf("C:%d is min");
				  printf("D:%d is min");   
             }
             
          else if(e<c){
		  
                  
                  printf("E:%d is min");
                  printf("C:%d is min");
            }
	 
	       else if(d<c)
	 
	              printf("D:%d is min");
	              printf("C:%d is min");
	 
	  }
