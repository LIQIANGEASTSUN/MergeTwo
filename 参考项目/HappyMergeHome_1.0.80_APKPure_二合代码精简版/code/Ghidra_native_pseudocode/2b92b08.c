
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba2b08(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int unaff_r6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02ba3004 + 0x2ba2b20);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba3008 + 0x2ba2b34));
    func_0x01438628(*(undefined4 *)(_UNK_02ba300c + 0x2ba2b40));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3010 + 0x2ba2b4c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3014 + 0x2ba2b58));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3018 + 0x2ba2b64));
    func_0x01438628(*(undefined4 *)(_UNK_02ba301c + 0x2ba2b70));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3020 + 0x2ba2b7c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3024 + 0x2ba2b88));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0xfce,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_02ba3028 + 0x2ba2be8);
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0x28,0,0);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02ba302c + 0x2ba2c24) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c57e04(iVar1,0);
      if (iVar1 != 0) {
        piVar8 = *(int **)(_UNK_02ba3030 + 0x2ba2c58);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(_UNK_02ba3034 + 0x2ba2c74);
        iVar1 = func_0x014e9518(*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02be0a54(iVar1,0,0);
        if (iVar1 != 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar9);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02bdd790(iVar1,1,0,0,0);
          if (iVar1 != -1) {
            iVar1 = **(int **)(*piVar10 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02b67d68(iVar1,0x28,0);
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = *(int *)(iVar2 + 0xc);
              unaff_r6 = iVar2;
            }
            if (iVar2 != 0 && iVar1 != 0) {
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(*puVar9);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x02be0a54(iVar1,0,0);
              if (iVar1 != 0) {
                if (*(int *)(*piVar8 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x014e9518(*puVar9);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x02bdedf8(iVar1,0,0);
                if (0 < *(int *)(unaff_r6 + 0xc)) {
                  iVar2 = 0;
                  do {
                    iVar3 = func_0x0152983c(unaff_r6,iVar2,
                                            **(undefined4 **)(_UNK_02ba3038 + 0x2ba2ddc));
                    iVar7 = 0;
                    while( true ) {
                      if (*(int *)(*piVar8 + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar4 = func_0x014e9518(*puVar9);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      iVar4 = func_0x02be0a54(iVar4,0,0);
                      if (iVar4 <= iVar7) break;
                      if (*(int *)(*piVar8 + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar4 = func_0x014e9518(*puVar9);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      iVar4 = func_0x02be0b0c(iVar4,iVar7,0,0);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      uStack_28 = *(undefined4 *)(iVar4 + 8);
                      uVar5 = func_0x01524ffc(&uStack_28,0);
                      if (iVar3 == 0) {
                        func_0x014388e4();
                      }
                      iVar4 = func_0x014e9678(iVar3,uVar5,0);
                      if ((iVar7 < iVar1) && (iVar4 != 0)) {
                        iVar4 = **(int **)(*piVar10 + 0x5c);
                        if (iVar4 == 0) {
                          func_0x014388e4();
                        }
                        iVar4 = func_0x02b6127c(iVar4,0x28,iVar3,0,0);
                        if (iVar4 != 0) {
                          piVar10 = *(int **)(_UNK_02ba303c + 0x2ba2f34);
                          piVar8 = *(int **)(_UNK_02ba3040 + 0x2ba2f40);
                          uVar5 = **(undefined4 **)(*piVar10 + 0x5c);
                          if (*(int *)(*piVar8 + 0x74) == 0) {
                            func_0x014387a4();
                          }
                          iVar1 = func_0x024ef144(uVar5,0,0);
                          if (iVar1 == 0) {
                            return;
                          }
                          iVar1 = **(int **)(*piVar10 + 0x5c);
                          if (iVar1 == 0) {
                            func_0x014388e4();
                          }
                          uVar5 = func_0x02d06f88(iVar1,0);
                          if (*(int *)(*piVar8 + 0x74) == 0) {
                            func_0x014387a4();
                          }
                          iVar1 = func_0x024ef144(uVar5,0,0);
                          if (iVar1 == 0) {
                            return;
                          }
                          iVar1 = **(int **)(*piVar10 + 0x5c);
                          if (iVar1 == 0) {
                            func_0x014388e4();
                          }
                          uVar5 = func_0x02d06f88(iVar1,0);
                          func_0x0157e8ec(uVar5,0,0,0,0);
                          return;
                        }
                      }
                      iVar7 = iVar7 + 1;
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < *(int *)(unaff_r6 + 0xc));
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xfce,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

