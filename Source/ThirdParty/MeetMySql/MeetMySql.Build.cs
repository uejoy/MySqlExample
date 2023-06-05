// Copyright 2015-2023 UEJoy 自动生成文件 Version 1.1.0

using UnrealBuildTool;
using System.IO;

public class MeetMySql : ModuleRules
{
   public MeetMySql(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
        //库文件路径
        PublicSystemLibraryPaths.Add(Path.Combine(ModuleDirectory, "lib"));
        //头文件路径
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
        //添加静态库
        
        PublicSystemLibraries.Add(Path.Combine(ModuleDirectory, "lib", "mysqlcppconn-static.lib"));
        // //加入动态库
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "lib", "libcrypto-1_1-x64.dll"));
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "lib", "libssl-1_1-x64.dll"));
    }
}
