/* Ghidra 12.1.2 native pseudocode; RVA 0x690A3B0; MergeEngine.Configuration.GameConfig.InventoryValid; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong MergeEngine_Configuration_GameConfig__InventoryValid(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    return (ulong)(0 < *(int *)(param_2 + 0x14) &&
                  (0 < *(int *)(param_2 + 0x10) &&
                  *(int *)(param_2 + 0x10) < *(int *)(param_2 + 0x14)));
  }
  lVar3 = func_0x03280cac();
  uVar1 = _UNK_01780b48;
  *(undefined4 *)(lVar3 + 0x90) = 0x3e4ccccd;
  *(undefined4 *)(lVar3 + 0xf0) = 0x3fb33333;
  *(undefined8 *)(lVar3 + 0xe8) = uVar1;
  *(undefined4 *)(lVar3 + 0x104) = 4;
  puVar2 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e2fd58 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fd58 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x057da5fc(lVar3,0);
  if (pcRam0000000007e2fd60 == (code *)0x0) {
    pcRam0000000007e2fd60 = (code *)func_0x032809dc(&UNK_017bba21);
  }
                    /* WARNING: Could not recover jumptable at 0x06fe1244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*pcRam0000000007e2fd60)(lVar3);
  return uVar4;
}

