/* Cpp2IL mapping: native/Cpp2IL-ISIL/Mansion.Scripts/UnityBoardController.txt
 * Cpp2IL method: System.Void remove_OnMergeActProcessed(System.Action`1<GameLogic.Merge.MergeBoardAct> value)
 * Ghidra function entry: 0333b618
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0333b618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 extraout_w1;
  undefined1 auVar6 [16];
  
  if ((bRam0000000005e2c066 & 1) == 0) {
    func_0x0249f8e4(&DAT_059c16f0);
    bRam0000000005e2c066 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x308);
  do {
    lVar3 = func_0x045f070c(lVar5,param_2,0);
    uVar1 = _DAT_059c16f0;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = func_0x0249fa68(lVar3,_DAT_059c16f0);
      if (lVar4 == 0) {
        auVar6 = func_0x0249ff10(lVar3,uVar1);
        if ((bRam0000000005e2c067 & 1) == 0) {
          func_0x0249f8e4(&DAT_059c16f0);
          bRam0000000005e2c067 = 1;
        }
        lVar5 = *(long *)(auVar6._0_8_ + 0x310);
        do {
          lVar3 = func_0x045f0520(lVar5,auVar6._8_8_,0);
          uVar1 = _DAT_059c16f0;
          if (lVar3 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = func_0x0249fa68(lVar3,_DAT_059c16f0);
            if (lVar4 == 0) {
              auVar6 = func_0x0249ff10(lVar3,uVar1);
              if ((bRam0000000005e2c068 & 1) == 0) {
                func_0x0249f8e4(&DAT_059c16f0);
                bRam0000000005e2c068 = 1;
              }
              lVar5 = *(long *)(auVar6._0_8_ + 0x310);
              do {
                lVar3 = func_0x045f070c(lVar5,auVar6._8_8_,0);
                uVar1 = _DAT_059c16f0;
                if (lVar3 == 0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = func_0x0249fa68(lVar3,_DAT_059c16f0);
                  if (lVar4 == 0) {
                    lVar5 = func_0x0249ff10(lVar3,uVar1);
                    *(undefined1 *)(lVar5 + 0x2e0) = extraout_w1;
                    return;
                  }
                }
                lVar3 = func_0x024d8ac4(auVar6._0_8_ + 0x310,lVar4,lVar5);
                bVar2 = lVar3 != lVar5;
                lVar5 = lVar3;
              } while (bVar2);
              return;
            }
          }
          lVar3 = func_0x024d8ac4(auVar6._0_8_ + 0x310,lVar4,lVar5);
          bVar2 = lVar3 == lVar5;
          lVar5 = lVar3;
          if (bVar2) {
            return;
          }
        } while( true );
      }
    }
    lVar3 = func_0x024d8ac4(param_1 + 0x308,lVar4,lVar5);
    bVar2 = lVar3 == lVar5;
    lVar5 = lVar3;
    if (bVar2) {
      return;
    }
  } while( true );
}

