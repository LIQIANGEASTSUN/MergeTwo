
/* WARNING: Possible PIC construction at 0x02c571f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c571fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c56ff0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int *unaff_r5;
  undefined4 uVar6;
  int unaff_r6;
  char *pcVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int aiStack_24 [4];
  
  pcVar7 = (char *)(_UNK_02c570d0 + 0x2c57008);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c570d4 + 0x2c5701c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f3d,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != (int *)0x0) {
      iVar1 = param_2[3];
    }
    if ((param_2 == (int *)0x0 || iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 1)) {
      return;
    }
    piVar2 = *(int **)(iVar1 + 0x10);
    param_2 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (param_2 = piVar2, *piVar2 != **(int **)(_UNK_02c570d8 + 0x2c570a8))) {
      func_0x01438ca8();
      param_2 = (int *)0x0;
    }
    pcVar7 = (char *)(_UNK_02c57af8 + 0x2c570f8);
    if (*pcVar7 == '\0') {
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
      *pcVar7 = '\x01';
    }
    aiStack_24[0] = 0;
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
        uVar6 = func_0x014e94d8(iVar1,0);
        if (*(int *)(**(int **)(_UNK_02c57b38 + 0x2c57294) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(param_2,uVar6,0);
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
            iVar4 = FUN_02c3d868(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar4 + 0xb0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02beba7c(iVar1,uVar6,0);
            if ((iVar1 != 0) && (iVar1 = FUN_02c3f4b4(), -1 < iVar1)) {
              piVar2 = *(int **)(_UNK_02c57b40 + 0x2c57364);
              if (*(int *)(*piVar2 + 0x74) == 0) {
                func_0x014387a4();
              }
              puVar8 = *(undefined4 **)(_UNK_02c57b44 + 0x2c57380);
              iVar1 = func_0x014e9518(*puVar8);
              iVar4 = FUN_02c3d868(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar6 = *(undefined4 *)(iVar4 + 0xb0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = FUN_02bd114c(iVar1,uVar6,0,0);
              if (iVar1 != 0) {
                if (*(int *)(*piVar2 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar1 = func_0x014e9518(*puVar8);
                iVar4 = FUN_02c3d868(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                uVar6 = *(undefined4 *)(iVar4 + 0xb0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = FUN_02bad204(iVar1,uVar6,0,0);
                if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 8))) {
                  if (*(int *)(**(int **)(_UNK_02c57b48 + 0x2c5744c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b4c + 0x2c57468));
                  uVar6 = *(undefined4 *)(iVar1 + 8);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar4 = func_0x029a6fa8(iVar4,uVar6,0);
                  if (*(int *)(*piVar2 + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar3 = func_0x014e9518(*puVar8);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = FUN_02baed04(iVar3,iVar4,0);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0x1c) - 0x3e9U < 2) {
                    if (*(int *)(**(int **)(_UNK_02c57b50 + 0x2c57500) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = func_0x0202bb70(0);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    uVar6 = func_0x0202bc14(iVar1,**(undefined4 **)(_UNK_02c57b54 + 0x2c57538),0);
                    if (*(int *)(**(int **)(_UNK_02c57b58 + 0x2c57550) + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b5c + 0x2c5756c));
                    iVar4 = *(int *)(param_1 + 0x38);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    iVar4 = func_0x024eecb8(iVar4,0);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    func_0x024ef228(&fStack_30,iVar4,0);
                    afStack_40[0] = fStack_28 + _UNK_02c5773c;
                    fStack_2c = fStack_2c + _UNK_02c5773c;
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    afStack_40[1] = 1.5;
                    FUN_02c396c4(iVar1,uVar6,fStack_30 + 0.5,fStack_2c);
                  }
                  else {
                    if (iVar3 == 4) {
                      if (*(int *)(*piVar2 + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar4 = func_0x014e9518(*puVar8);
                      iVar3 = FUN_02c3d868(param_1);
                      if (iVar3 == 0) {
                        func_0x014388e4();
                      }
                      uVar6 = *(undefined4 *)(iVar3 + 0xb0);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      iVar4 = FUN_02baed80(iVar4,uVar6,0,0);
                      if (0 < iVar4) {
                        if (*(int *)(**(int **)(_UNK_02c57b60 + 0x2c57684) + 0x74) == 0) {
                          func_0x014387a4();
                        }
                        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b64 + 0x2c576a0));
                        iVar4 = *(int *)(param_1 + 0x38);
                        if (iVar4 == 0) {
                          func_0x014388e4();
                        }
                        iVar4 = func_0x024eecb8(iVar4,0);
                        if (iVar4 == 0) {
                          func_0x014388e4();
                        }
                        func_0x024ef228(&fStack_30,iVar4,0);
                        fStack_28 = fStack_28 + _UNK_02c5773c;
                        fStack_2c = fStack_2c + _UNK_02c5773c;
                        if (iVar1 == 0) {
                          func_0x014388e4();
                        }
                        afStack_40[0] = 1.5;
                        FUN_02c39de4(iVar1,fStack_30 + 0.5,fStack_2c,fStack_28);
                        return;
                      }
                    }
                    iVar4 = *(int *)(param_1 + 0x30);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    iVar4 = FUN_02be9134(iVar4,0);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar4 + 0xc) == 0) {
                      func_0x014388e8();
                    }
                    iVar3 = *(int *)(iVar4 + 0x10);
                    iVar4 = 0;
                    if (iVar3 != 0) {
                      iVar4 = *(int *)(iVar3 + 0xc);
                    }
                    if (iVar3 != 0 && iVar4 != 0) {
                      FUN_02c27b2c(iVar4,0,0);
                    }
                    iVar4 = FUN_02c3d868(param_1);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    iVar4 = *(int *)(iVar4 + 0x14);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    uVar6 = func_0x014e94d8(iVar4,0);
                    FUN_02c56b44(param_1,uVar6);
                    if (*(int *)(*piVar2 + 0x74) == 0) {
                      func_0x014387a4();
                    }
                    iVar4 = func_0x014e9518(*puVar8);
                    if (iVar4 == 0) {
                      func_0x014388e4();
                    }
                    iVar4 = FUN_02bd7e48(iVar4,0,0);
                    iVar3 = func_0x014e9518(*puVar8);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = FUN_02bde980(iVar3,0,0);
                    if (iVar4 < iVar3) {
                      aiStack_24[0] = iVar1;
                      if (*(int *)(*piVar2 + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar4 = func_0x014e9518(*puVar8);
                      iVar3 = FUN_02c3d868(param_1);
                      if (iVar3 == 0) {
                        func_0x014388e4();
                      }
                      uVar6 = *(undefined4 *)(iVar3 + 0xb0);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      FUN_02be2ef0(iVar4,uVar6,0,0);
                      iVar4 = func_0x014e9518(*puVar8);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      FUN_02bdf068(iVar4,iVar1,0,0);
                      iVar1 = func_0x014e9518(*puVar8);
                      iVar4 = FUN_02c3d868(param_1);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      uVar6 = *(undefined4 *)(iVar4 + 0xb0);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      afStack_40[0] = 0.0;
                      afStack_40[1] = 1.4013e-45;
                      afStack_40[2] = 0.0;
                      FUN_02bd9a1c(iVar1,uVar6,aiStack_24,
                                   **(undefined4 **)(_UNK_02c57b68 + 0x2c57920));
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
                      uVar6 = func_0x02c57b7c(param_1);
                      func_0x024ef208(param_1,uVar6,0);
                    }
                    else {
                      if (*(int *)(**(int **)(_UNK_02c57b74 + 0x2c57a34) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c57b78 + 0x2c57a50));
                      iVar4 = *(int *)(param_1 + 0x38);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      iVar4 = func_0x024eecb8(iVar4,0);
                      if (iVar4 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024ef228(&fStack_30,iVar4,0);
                      fStack_28 = fStack_28 + _UNK_02c57af0;
                      fStack_30 = fStack_30 + _UNK_02c57af4;
                      fStack_2c = fStack_2c + _UNK_02c57af0;
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      afStack_40[0] = 1.0;
                      FUN_02c39cb0(iVar1,fStack_30,fStack_2c,fStack_28);
                    }
                  }
                }
              }
            }
          }
        }
      }
      return;
    }
    iVar1 = func_0x029540a4(0x5f3e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x2c571fc;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)afStack_40;
  }
  else {
    iVar1 = func_0x029540a4(0x5f3d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar4 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x024f56d0(iVar4,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
}

