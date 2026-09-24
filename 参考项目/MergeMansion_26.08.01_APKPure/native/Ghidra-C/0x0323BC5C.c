/* Cpp2IL mapping: native/Cpp2IL-ISIL/Mansion.Scripts/UnityBoardController.txt
 * Cpp2IL method: System.Void remove_OnMergeResult(System.Action`1<MergeResult> value)
 * Ghidra function entry: 0333bc5c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0333bc5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005e2c06e & 1) == 0) {
    func_0x0249f8e4(&DAT_059c1708);
    bRam0000000005e2c06e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x340);
  do {
    lVar3 = func_0x045f070c(lVar5,param_2,0);
    uVar1 = _DAT_059c1708;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = func_0x0249fa68(lVar3,_DAT_059c1708);
      if (lVar4 == 0) {
        lVar5 = func_0x0249ff10(lVar3,uVar1);
        if (*(long *)(lVar5 + 0x2b0) != 0) {
          return *(long *)(*(long *)(lVar5 + 0x2b0) + 0x500);
        }
        lVar5 = func_0x0249fb90();
        if (*(long *)(lVar5 + 0x2b0) != 0) {
          return *(long *)(*(long *)(lVar5 + 0x2b0) + 0x508);
        }
        lVar5 = func_0x0249fb90();
        return *(long *)(lVar5 + 0x348);
      }
    }
    lVar3 = func_0x024d8ac4(param_1 + 0x340,lVar4,lVar5);
    bVar2 = lVar3 == lVar5;
    lVar5 = lVar3;
    if (bVar2) {
      return lVar3;
    }
  } while( true );
}

