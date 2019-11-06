package inclass.test.first.b;

class MemberManager {
    public boolean register(Member mb,String uName, String uPasw1, String uPasw2){ // 注册功能。此方法返回值和参数可根据需要自行定义
        // 检验用户名
        // 检验两次密码是否相同及密码长度
        // 根据上述检验过程成功与否在屏幕输出注册成功或注册失败，或提示相关信息
        boolean flag = false;
        if(uName.length() >= 3)
        {
            if(uPasw1.length() >= 6)
            {
                if(uPasw1.equals(uPasw2))
                {
                    mb = new Member(uName, uPasw1);
                    flag = true;
                }
                else
                {
                    System.out.println("确认密码与密码不相等");
                }
            }
            else
            {
                System.out.println("密码小于6位数");
            }
        }
        else
        {
            System.out.println("用户名小于3位数");
        }
        if(flag)
        {
            System.out.println("注册成功");
        }
        else
        {
            System.out.println("注册失败");
        }
        return flag;
    }
}
