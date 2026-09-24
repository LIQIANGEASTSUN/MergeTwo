/* Ghidra 12.1.2 native pseudocode; RVA 0x5F1530C; ContextualizedECS.Systems.SystemInfoExtensions.First; status ok */


long ContextualizedECS_Systems_SystemInfoExtensions__First(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_077c3a98;
  puVar1 = PTR_DAT_0777b5d8;
  if ((bRam0000000007e22c59 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b5d8);
    func_0x03280a18(PTR_DAT_077c3a98);
    bRam0000000007e22c59 = 1;
  }
  uVar3 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x05356664(uVar3,0,*(undefined8 *)puVar2,0);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    func_0x032809c4((undefined8 *)(param_1 + 0x20),uVar3);
    return param_1;
  }
  func_0x03280cac();
  return 0;
}

