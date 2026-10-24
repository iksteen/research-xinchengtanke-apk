/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* SkipUnityLogo$$BeforeSplashScreen @ 0x73dd38
 * void SkipUnityLogo__BeforeSplashScreen (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkipUnityLogo$$BeforeSplashScreen
   void SkipUnityLogo__BeforeSplashScreen (const MethodInfo* method); */

void native_SkipUnityLogo__BeforeSplashScreen_73dd38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 uStack_24;
  
  if ((bRam000000000133f620 & 1) == 0) {
    native_sub_43273c(&System_Action_TypeInfo_12d3690);
    native_sub_43273c(&Method_SkipUnityLogo_AsyncSkip___12e6938);
    native_sub_43273c(&System_Threading_Tasks_Task_TypeInfo_12d6110);
    bRam000000000133f620 = 1;
  }
  uVar1 = native_sub_432808(_System_Action_TypeInfo_12d3690);
  native_System_Action___ctor_956520(uVar1,0,_Method_SkipUnityLogo_AsyncSkip___12e6938,0);
  if (((*(byte *)(_System_Threading_Tasks_Task_TypeInfo_12d6110 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Threading_Tasks_Task_TypeInfo_12d6110 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = 0;
  if ((bRam0000000001341c3d & 1) == 0) {
    native_sub_43273c(&System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138,0);
    native_sub_43273c(&System_Threading_Tasks_Task_TypeInfo_12d6110);
    bRam0000000001341c3d = 1;
    uVar2 = extraout_x1;
  }
  uStack_24 = 1;
  if (((*(byte *)(_System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138 + 0xe0) == 0)) {
    native_sub_4327ec();
    uVar2 = extraout_x1_00;
  }
  if (cRam000000000133e769 == '\0') {
    native_sub_43273c(&System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138,uVar2);
    cRam000000000133e769 = '\x01';
  }
  if (((*(byte *)(_System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = *(undefined8 *)
           (*(long *)(_System_Threading_Tasks_TaskScheduler_TypeInfo_12d6138 + 0xb8) + 8);
  if (((*(byte *)(_System_Threading_Tasks_Task_TypeInfo_12d6110 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Threading_Tasks_Task_TypeInfo_12d6110 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Threading_Tasks_Task_TypeInfo_12d6110);
  }
  native_System_Threading_Tasks_Task__InternalStartNew_a52a1c(0,uVar1,0,0,uVar2,8,0,&uStack_24);
  return;
}



/* SkipUnityLogo$$AsyncSkip @ 0x73dddc
 * void SkipUnityLogo__AsyncSkip (const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0076b6c8) */
/* WARNING: Removing unreachable block (ram,0x0076b6d4) */
/* SkipUnityLogo$$AsyncSkip
   void SkipUnityLogo__AsyncSkip (const MethodInfo* method); */

void native_SkipUnityLogo__AsyncSkip_73dddc(void)

{
  if (pcRam000000000133fb50 == (code *)0x0) {
    pcRam000000000133fb50 = (code *)native_sub_4326f0(&UNK_00e29509,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0076b70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fb50)();
  return;
}



/* SkipUnityLogo$$.ctor @ 0x73dde8
 * void SkipUnityLogo___ctor (SkipUnityLogo_o* __this, const MethodInfo* method); */

/* SkipUnityLogo$$.ctor
   void SkipUnityLogo___ctor (SkipUnityLogo_o* __this, const MethodInfo* method); */

void native_SkipUnityLogo___ctor_73dde8(void)

{
  return;
}


