/* Cpp2IL mapping: native/Cpp2IL-ISIL/Mansion.Scripts/UnityBoardController.txt
 * Cpp2IL method: System.Void OnAutoMergeDurationChanged()
 * Ghidra function entry: 0333e5d0
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0333e5d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong auStack_68 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000005e2c073 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a292e0);
    func_0x0249f8e4(&DAT_059d3c68);
    bRam0000000005e2c073 = 1;
  }
  lStack_28 = 0;
  uStack_38 = *(undefined8 *)(param_1 + 0x398);
  uStack_40 = *(undefined8 *)(param_1 + 0x390);
  if (*(int *)(_DAT_059d3c68 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar1 = func_0x0288eda8(&uStack_40,&lStack_28,_DAT_05a292e0);
  if ((uVar1 & 1) != 0) {
    if (lStack_28 == 0) {
      lVar2 = func_0x0249fb90();
      auStack_68[1] = 0x333e678;
      puStack_50 = &DAT_059d3c68;
      puStack_48 = &DAT_05a292e0;
      if ((bRam0000000005e2c14f & 1) == 0) {
        func_0x0249f8e4(&DAT_059e2660);
        func_0x0249f8e4(&DAT_05a34a88);
        bRam0000000005e2c14f = 1;
      }
      if (*(long *)(lVar2 + 0x20) == 0) {
        if (*(int *)(_DAT_059e2660 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        uStack_54 = **(undefined4 **)(_DAT_059e2660 + 0xb8);
        uStack_58 = (*(undefined4 **)(_DAT_059e2660 + 0xb8))[1];
        auStack_68[0] = 0;
        func_0x02953678(auStack_68,&uStack_54,&uStack_58,_DAT_05a34a88);
      }
      else {
        auStack_68[0] = func_0x03774000(*(long *)(lVar2 + 0x20),0);
      }
      return auStack_68[0];
    }
    uVar1 = func_0x0315b66c(lStack_28,0);
  }
  return uVar1;
}

