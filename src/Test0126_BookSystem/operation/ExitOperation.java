package Test0126_BookSystem.operation;

import Test0126_BookSystem.BookList;

public class ExitOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        // 退出程序
        System.out.println("退出程序");
    }
}
