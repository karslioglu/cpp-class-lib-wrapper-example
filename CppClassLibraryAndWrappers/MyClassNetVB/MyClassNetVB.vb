Module MyClassNetVB

    Sub Main()
        Dim myClassObj As MyClassNet
        Dim s As String
        Dim val As Integer

        Console.WriteLine("Hello from MyClassNetVB.exe")

        myClassObj = New MyClassNet
        Console.WriteLine("the answer to life, the universe, and everything is {0}", myClassObj.getValue())

        myClassObj.setMessage("Modified Message")
        s = myClassObj.getMessage()
        Console.Write("Message From Library: ")
        myClassObj.printMessage()
        Console.WriteLine("Message From Application: {0}", s)

        myClassObj.setValue(24)
        val = myClassObj.getValue()
        Console.WriteLine("Modified Value: {0}", Val)

        Console.WriteLine("")
    End Sub

End Module
