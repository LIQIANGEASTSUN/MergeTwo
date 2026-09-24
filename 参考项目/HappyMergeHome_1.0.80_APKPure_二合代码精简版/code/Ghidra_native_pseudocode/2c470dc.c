
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c570dc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_02c57af8 + 0x2c570f8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c57afc + 0x2c5710c));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b00 + 0x2c57118));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b04 + 0x2c57124));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b08 + 0x2c57130));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b0c + 0x2c5713c));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b10 + 0x2c57148));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b14 + 0x2c57154));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b18 + 0x2c57160));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b1c + 0x2c5716c));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b20 + 0x2c57178));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b24 + 0x2c57184));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b28 + 0x2c57190));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b2c + 0x2c5719c));
    func_0x01438628(*(undefined4 *)(_UNK_02c57b30 + 0x2c571a8));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x02953fd4(0x5f3e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0ef8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_02c57b34 + 0x2c57248) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x02c35d10(3);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x014e94d8(iVar1,0);
      if (*(int *)(**(int **)(_UNK_02c57b38 + 0x2c57294) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(param_2,uVar2,0);
      if (iVar1 == 0) {
        iVar1 = FUN_02c3d868(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (-1 < *(int *)(iVar1 + 0xb0)) {
          iVar1 = **(int **)(**(int **)(_UNK_02c57b3c + 0x2c572ec) + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02c3d868(iVar1);
          iVar3 = FUN_02c3d868(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 0xb0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02beba7c(iVar1,uVar2,0);
          if ((iVar1 != 0) && (iVar1 = FUN_02c3f4b4(), -1 < iVar1)) {
            piVar7 = *(int **)(_UNK_02c57b40 + 0x2c57364);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            puVar6 = *(undefined4 **)(_UNK_02c57b44 + 0x2c57380);
            iVar1 = func_0x014e9518(*puVar6);
            iVar3 = FUN_02c3d868(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar3 + 0xb0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02bd114c(iVar1,uVar2,0,0);
            if (iVar1 != 0) {
              if (*(int *)(*piVar7 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(*puVar6);
              iVar3 = FUN_02c3d868(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar3 + 0xb0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = FUN_02bad204(iVar1,uVar2,0,0);
              if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 8))) {
                if (*(int *)(**(int **)(_UNK_02c57b48 + 0x2c5744c) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b4c + 0x2c57468));
                uVar2 = *(undefined4 *)(iVar1 + 8);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x029a6fa8(iVar3,uVar2,0);
                if (*(int *)(*piVar7 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar4 = func_0x014e9518(*puVar6);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = FUN_02baed04(iVar4,iVar3,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x1c) - 0x3e9U < 2) {
                  if (*(int *)(**(int **)(_UNK_02c57b50 + 0x2c57500) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x0202bb70(0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uVar2 = func_0x0202bc14(iVar1,**(undefined4 **)(_UNK_02c57b54 + 0x2c57538),0);
                  if (*(int *)(**(int **)(_UNK_02c57b58 + 0x2c57550) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b5c + 0x2c5756c));
                  iVar3 = *(int *)(param_1 + 0x38);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = func_0x024eecb8(iVar3,0);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024ef228(&fStack_30,iVar3,0);
                  fStack_28 = fStack_28 + _UNK_02c5773c;
                  fStack_2c = fStack_2c + _UNK_02c5773c;
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  FUN_02c396c4(iVar1,uVar2,fStack_30 + 0.5,fStack_2c,fStack_28,0x3fc00000);
                }
                else {
                  if (iVar4 == 4) {
                    if (*(int *)(*piVar7 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar3 = func_0x014e9518(*puVar6);
                    iVar4 = FUN_02c3d868(param_1);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    uVar2 = *(undefined4 *)(iVar4 + 0xb0);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = FUN_02baed80(iVar3,uVar2,0,0);
                    if (0 < iVar3) {
                      if (*(int *)(**(int **)(_UNK_02c57b60 + 0x2c57684) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b64 + 0x2c576a0));
                      iVar3 = *(int *)(param_1 + 0x38);
                      if (iVar3 == 0) {
                        func_0x014388e4();
                      }
                      iVar3 = func_0x024eecb8(iVar3,0);
                      if (iVar3 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024ef228(&fStack_30,iVar3,0);
                      fStack_28 = fStack_28 + _UNK_02c5773c;
                      fStack_2c = fStack_2c + _UNK_02c5773c;
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      FUN_02c39de4(iVar1,fStack_30 + 0.5,fStack_2c,fStack_28,0x3fc00000);
                      return;
                    }
                  }
                  iVar3 = *(int *)(param_1 + 0x30);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = FUN_02be9134(iVar3,0);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar3 + 0xc) == 0) {
                    func_0x014388e8();
                  }
                  iVar4 = *(int *)(iVar3 + 0x10);
                  iVar3 = 0;
                  if (iVar4 != 0) {
                    iVar3 = *(int *)(iVar4 + 0xc);
                  }
                  if (iVar4 != 0 && iVar3 != 0) {
                    FUN_02c27b2c(iVar3,0,0);
                  }
                  iVar3 = FUN_02c3d868(param_1);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = *(int *)(iVar3 + 0x14);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  uVar2 = func_0x014e94d8(iVar3,0);
                  FUN_02c56b44(param_1,uVar2);
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar3 = func_0x014e9518(*puVar6);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = FUN_02bd7e48(iVar3,0,0);
                  iVar4 = func_0x014e9518(*puVar6);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar4 = FUN_02bde980(iVar4,0,0);
                  if (iVar3 < iVar4) {
                    iStack_24 = iVar1;
                    if (*(int *)(*piVar7 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar3 = func_0x014e9518(*puVar6);
                    iVar4 = FUN_02c3d868(param_1);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    uVar2 = *(undefined4 *)(iVar4 + 0xb0);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    FUN_02be2ef0(iVar3,uVar2,0,0);
                    iVar3 = func_0x014e9518(*puVar6);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    FUN_02bdf068(iVar3,iVar1,0,0);
                    iVar1 = func_0x014e9518(*puVar6);
                    iVar3 = FUN_02c3d868(param_1);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    uVar2 = *(undefined4 *)(iVar3 + 0xb0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    FUN_02bd9a1c(iVar1,uVar2,&iStack_24,**(undefined4 **)(_UNK_02c57b68 + 0x2c57920)
                                 ,0,1,0);
                    if (*(int *)(**(int **)(_UNK_02c57b6c + 0x2c57944) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b70 + 0x2c57960));
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    func_0x0202998c(iVar1,3,0,0);
                    iVar1 = *(int *)(param_1 + 0xb4);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x024f0ef8(iVar1,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    func_0x014e94e8(iVar1,0,0);
                    iVar1 = *(int *)(param_1 + 0xb4);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x024f0ef8(iVar1,0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    func_0x014e94e8(iVar1,1,0);
                    func_0x024f15c4(param_1,0);
                    uVar2 = func_0x02c57b7c(param_1);
                    func_0x024ef208(param_1,uVar2,0);
                  }
                  else {
                    if (*(int *)(**(int **)(_UNK_02c57b74 + 0x2c57a34) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b78 + 0x2c57a50));
                    iVar3 = *(int *)(param_1 + 0x38);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = func_0x024eecb8(iVar3,0);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024ef228(&fStack_30,iVar3,0);
                    fStack_28 = fStack_28 + _UNK_02c57af0;
                    fStack_30 = fStack_30 + _UNK_02c57af4;
                    fStack_2c = fStack_2c + _UNK_02c57af0;
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    FUN_02c39cb0(iVar1,fStack_30,fStack_2c,fStack_28,0x3f800000);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5f3e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

