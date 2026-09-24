/* Ghidra 12.1.2 native pseudocode; RVA 0x67955EC; MergeEngine.ECS.Systems.Items.TimeLimitedActivationSystem.IsLocked; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Items_TimeLimitedActivationSystem__IsLocked(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000007e28d80 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    bRam0000000007e28d80 = 1;
  }
  if (param_2 == 0) {
    auVar5._0_8_ = func_0x03280cac();
    puVar2 = PTR_DAT_078105d0;
    if ((bRam0000000007e28d81 & 1) == 0) {
      func_0x03280a18(PTR_DAT_078105d0);
      bRam0000000007e28d81 = 1;
    }
    uVar4 = *(undefined8 *)puVar2;
    auVar5._8_8_ = 0;
    return auVar5;
  }
  auVar5 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638);
  lVar3 = auVar5._0_8_;
  if (lVar3 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar5._8_8_;
    return auVar1 << 0x40;
  }
  if ((((*(char *)(lVar3 + 0x30) == '\0') && (*(char *)(lVar3 + 0x33) == '\0')) &&
      (*(int *)(lVar3 + 0x44) < 1)) &&
     (((*(char *)(lVar3 + 0x31) == '\0' && (*(char *)(lVar3 + 0x78) == '\0')) &&
      (*(char *)(lVar3 + 0x79) == '\0')))) {
    return ZEXT116(*(char *)(lVar3 + 0x32) != '\0');
  }
  return ZEXT816(1);
}

