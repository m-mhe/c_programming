main(){
    float temp;
    printf("Enter the current temperature in Celsius : ");
    scanf("%f", &temp);
    //With if-else
    if(temp<25){
        printf("COOL");
    }else if(temp>=50 && temp<=100){
        printf("HOT");
    }else if(temp>=100 && temp<=500){
        printf("ABOVE THE WATER BOILING POINT");
    }else if(temp>500){
        printf("WILD");
    }else{
        printf("NORMAL");
    }
    /*
    *Question: Can a switch statement be used in this instance?
    *Answer: No, because switch statements can not directly work with float data type. And the switch statement in C works by evaluating a single expression and then branching to one of several case labels based on the value of that expression. The expression must result in an integer, character, or enumeration constant, and the cases are typically for exact matches of these constants.
    */
}
