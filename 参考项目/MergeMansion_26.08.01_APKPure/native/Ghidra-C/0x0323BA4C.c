/* Cpp2IL mapping: native/Cpp2IL-ISIL/Mansion.Scripts/UnityBoardController.txt
 * Cpp2IL method: System.Void add_OnBoardStepResult(System.Action`1<BoardStepResult> value)
 * Ghidra function entry: 0333ba4c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0333ba4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000005e2c06b & 1) == 0) {
    func_0x0249f8e4(&DAT_059c1340);
    bRam0000000005e2c06b = 1;
  }
  lVar5 = *(long *)(param_1 + 0x338);
  do {
    lVar3 = func_0x045f0520(lVar5,param_2,0);
    uVar1 = _DAT_059c1340;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = func_0x0249fa68(lVar3,_DAT_059c1340);
      if (lVar4 == 0) {
        auVar6 = func_0x0249ff10(lVar3,uVar1);
        if ((bRam0000000005e2c06c & 1) == 0) {
          func_0x0249f8e4(&DAT_059c1340);
          bRam0000000005e2c06c = 1;
        }
        lVar5 = *(long *)(auVar6._0_8_ + 0x338);
        do {
          lVar3 = func_0x045f070c(lVar5,auVar6._8_8_,0);
          uVar1 = _DAT_059c1340;
          if (lVar3 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = func_0x0249fa68(lVar3,_DAT_059c1340);
            if (lVar4 == 0) {
              auVar6 = func_0x0249ff10(lVar3,uVar1);
              if ((bRam0000000005e2c06d & 1) == 0) {
                func_0x0249f8e4(&DAT_059c1708);
                bRam0000000005e2c06d = 1;
              }
              lVar5 = *(long *)(auVar6._0_8_ + 0x340);
              do {
                lVar3 = func_0x045f0520(lVar5,auVar6._8_8_,0);
                uVar1 = _DAT_059c1708;
                if (lVar3 == 0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = func_0x0249fa68(lVar3,_DAT_059c1708);
                  if (lVar4 == 0) {
                    auVar6 = func_0x0249ff10(lVar3,uVar1);
                    if ((bRam0000000005e2c06e & 1) == 0) {
                      func_0x0249f8e4(&DAT_059c1708);
                      bRam0000000005e2c06e = 1;
                    }
                    lVar5 = *(long *)(auVar6._0_8_ + 0x340);
                    do {
                      lVar3 = func_0x045f070c(lVar5,auVar6._8_8_,0);
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
                      lVar3 = func_0x024d8ac4(auVar6._0_8_ + 0x340,lVar4,lVar5);
                      bVar2 = lVar3 == lVar5;
                      lVar5 = lVar3;
                      if (bVar2) {
                        return lVar3;
                      }
                    } while( true );
                  }
                }
                lVar3 = func_0x024d8ac4(auVar6._0_8_ + 0x340,lVar4,lVar5);
                bVar2 = lVar3 == lVar5;
                lVar5 = lVar3;
                if (bVar2) {
                  return lVar3;
                }
              } while( true );
            }
          }
          lVar3 = func_0x024d8ac4(auVar6._0_8_ + 0x338,lVar4,lVar5);
          bVar2 = lVar3 == lVar5;
          lVar5 = lVar3;
          if (bVar2) {
            return lVar3;
          }
        } while( true );
      }
    }
    lVar3 = func_0x024d8ac4(param_1 + 0x338,lVar4,lVar5);
    bVar2 = lVar3 == lVar5;
    lVar5 = lVar3;
    if (bVar2) {
      return lVar3;
    }
  } while( true );
}

