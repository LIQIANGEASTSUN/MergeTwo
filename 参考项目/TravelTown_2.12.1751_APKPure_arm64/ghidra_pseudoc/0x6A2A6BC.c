/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2A6BC; MergeEngine.Configuration.Definitions.ResourceMultiple.Clone; status ok */


long MergeEngine_Configuration_Definitions_ResourceMultiple__Clone(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = 0x7e2a000;
  if ((bRam0000000007e2a432 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e2a432 = 1;
  }
  puVar1 = PTR_DAT_07771f40;
  if (*(long *)(param_1 + 0x20) != 0) {
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x5c);
    unaff_x23 = func_0x06120144(*(long *)(param_1 + 0x20),0);
    unaff_x22 = *(undefined8 *)(param_1 + 0x38);
    lVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x06b2a59c(lVar4,unaff_x21,unaff_x23,unaff_x22);
    uVar5 = 0;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x33) = *(undefined1 *)(param_1 + 0x33);
      *(undefined1 *)(lVar4 + 0x18) = *(undefined1 *)(param_1 + 0x18);
      return lVar4;
    }
  }
  lVar4 = func_0x03280cac();
  puVar3 = PTR_DAT_0782f0f0;
  puVar2 = PTR_DAT_0782f0e8;
  puVar1 = PTR_DAT_0777a670;
  uStack_60 = 0x6b2a75c;
  uStack_58 = unaff_x23;
  uStack_50 = unaff_x22;
  uStack_48 = unaff_x21;
  uStack_40 = uVar5;
  lStack_38 = param_1;
  if ((bRam0000000007e2a433 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a670);
    func_0x03280a18(PTR_DAT_0782f0f0);
    func_0x03280a18(PTR_DAT_0782f0e8);
    bRam0000000007e2a433 = 1;
  }
  uStack_64 = *(undefined4 *)(lVar4 + 0x5c);
  uVar5 = func_0x03280b94(*(undefined8 *)puVar1,&uStack_64);
  lVar4 = func_0x055f7edc(*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar5,0);
  return lVar4;
}

