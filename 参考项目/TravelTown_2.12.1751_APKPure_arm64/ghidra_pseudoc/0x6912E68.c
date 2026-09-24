/* Ghidra 12.1.2 native pseudocode; RVA 0x6912E68; MergeEngine.Configuration.LocalMergeItemsConfig.OnEnable; status ok */


void MergeEngine_Configuration_LocalMergeItemsConfig__OnEnable(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam0000000007e299ea & 1) == 0) {
    func_0x03280a18(PTR_DAT_07751a50);
    func_0x03280a18(PTR_DAT_07751a58);
    func_0x03280a18(PTR_DAT_077b51a0);
    bRam0000000007e299ea = 1;
  }
  puVar2 = PTR_DAT_077b51a0;
  puVar1 = PTR_DAT_07751a58;
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return;
      }
      lVar3 = func_0x0414419c(lVar3,iVar6,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      uVar4 = func_0x055fbf28(lVar3,*(undefined8 *)(param_1 + 0x60),0);
      if ((uVar4 & 1) == 0) {
        uVar5 = func_0x055ea7a0(*(undefined8 *)(param_1 + 0x60),lVar3,0);
        if (*(long *)(param_1 + 0x58) == 0) break;
        func_0x041441f0(*(long *)(param_1 + 0x58),iVar6,uVar5,*(undefined8 *)puVar2);
      }
      lVar3 = *(long *)(param_1 + 0x58);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
  func_0x03280cac();
  return;
}

