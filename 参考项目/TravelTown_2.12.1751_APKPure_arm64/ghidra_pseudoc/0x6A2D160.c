/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2D160; MergeEngine.Configuration.Definitions.Reward.AreItemBoxesRefsEqual; status ok */


/* WARNING: Possible PIC construction at 0x06b2d268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b2d26c) */
/* WARNING: Removing unreachable block (ram,0x06b2d2ec) */
/* WARNING: Removing unreachable block (ram,0x06b2d270) */
/* WARNING: Removing unreachable block (ram,0x06b2d2b0) */

ulong MergeEngine_Configuration_Definitions_Reward__AreItemBoxesRefsEqual
                (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *unaff_x22;
  undefined1 auVar9 [12];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000007e2a460 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f288);
    func_0x03280a18(PTR_DAT_0782f290);
    func_0x03280a18(PTR_DAT_0782f298);
    func_0x03280a18(PTR_DAT_0782f2a0);
    func_0x03280a18(PTR_DAT_0782f2a8);
    func_0x03280a18(PTR_DAT_0782f2b0);
    func_0x03280a18(PTR_DAT_0782f2b8);
    func_0x03280a18(PTR_DAT_0782f2c0);
    bRam0000000007e2a460 = 1;
  }
  puVar3 = PTR_DAT_0782f2c0;
  puVar2 = PTR_DAT_0782f298;
  puVar1 = PTR_DAT_0782f290;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_2 == 0) {
    auVar9 = func_0x03280cac();
    uVar6 = auVar9._0_8_;
    if (auVar9._8_4_ == 1) {
      plVar5 = (long *)func_0x072ce910(uVar6);
      lVar8 = *plVar5;
      func_0x072ce920();
      func_0x051159b0(&uStack_68,*unaff_x22);
      if (lVar8 == 0) {
        iVar7 = 0;
        goto LAB_06b2d2c8;
      }
      uVar6 = func_0x03280ca4(lVar8);
    }
    else {
      lVar8 = 0;
    }
    func_0x051159b0(&uStack_68,*unaff_x22);
    if (lVar8 == 0) {
      func_0x03365958(uVar6);
    }
    func_0x03280ca4(lVar8);
    uVar4 = func_0x02f09514();
  }
  else {
    func_0x04145068(&uStack_68,param_2,*(undefined8 *)PTR_DAT_0782f2b0);
    uVar4 = func_0x051159b4(&uStack_68,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      iVar7 = 5;
      func_0x051159b0(&uStack_68,*(undefined8 *)puVar1);
LAB_06b2d2c8:
      return (ulong)(iVar7 != 4);
    }
    uVar4 = func_0x03280ca0(*(undefined8 *)puVar3);
  }
  return uVar4;
}

