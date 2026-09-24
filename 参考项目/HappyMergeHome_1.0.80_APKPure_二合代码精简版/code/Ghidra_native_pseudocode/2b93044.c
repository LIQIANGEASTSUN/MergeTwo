
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba3044(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_02ba3a6c + 0x2ba305c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a70 + 0x2ba3070));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a74 + 0x2ba307c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a78 + 0x2ba3088));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a7c + 0x2ba3094));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a80 + 0x2ba30a0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a84 + 0x2ba30ac));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a88 + 0x2ba30b8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a8c + 0x2ba30c4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a90 + 0x2ba30d0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a94 + 0x2ba30dc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a98 + 0x2ba30e8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3a9c + 0x2ba30f4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3aa0 + 0x2ba3100));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3aa4 + 0x2ba310c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3aa8 + 0x2ba3118));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3aac + 0x2ba3124));
    func_0x01438628(*(undefined4 *)(_UNK_02ba3ab0 + 0x2ba3130));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xebf,0);
  if (iVar1 == 0) {
    iVar1 = **(int **)(**(int **)(_UNK_02ba3ab4 + 0x2ba3194) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,100,0,0);
    if (iVar1 == 0) {
      piVar7 = (int *)(param_1 + 0x14);
      if (*piVar7 != 0) {
        uVar5 = *(undefined4 *)(*piVar7 + 0xc);
        if (*(int *)(**(int **)(_UNK_02ba3ab8 + 0x2ba31dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024ef144(uVar5,0,0);
        if (iVar1 != 0) {
          iVar1 = *piVar7;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02c251d8(iVar1,0);
          if (iVar1 != 0) {
            piVar7 = *(int **)(_UNK_02ba3abc + 0x2ba3248);
            iVar1 = **(int **)(*piVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02b6127c(iVar1,100,0,0,0);
            iVar1 = **(int **)(*piVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x02b67abc(iVar1,100,0);
            if (iVar1 == 0) {
              return;
            }
            iVar1 = **(int **)(**(int **)(_UNK_02ba3ac0 + 0x2ba32b4) + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02b6146c(iVar1,0);
            return;
          }
        }
      }
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ba3ac4 + 0x2ba32e8));
      func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02ba3ac8 + 0x2ba32fc));
      iVar8 = 4;
      piVar11 = *(int **)(_UNK_02ba3acc + 0x2ba3314);
      piVar13 = *(int **)(_UNK_02ba3ad0 + 0x2ba331c);
      while( true ) {
        iVar6 = **(int **)(*piVar11 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c3d868(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02be9134(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = iVar8 - 4;
        if (*(int *)(iVar6 + 0xc) <= (int)uVar9) break;
        iVar6 = **(int **)(*piVar11 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c3d868(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02be9134(iVar6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar9) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + iVar8 * 4);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x02c3f4b4(iVar6,0);
        if (-1 < iVar6) {
          iVar6 = **(int **)(*piVar11 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02c3d868(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x02be9134(iVar6,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar6 + 0xc) <= uVar9) {
            func_0x014388e8();
          }
          iVar6 = *(int *)(iVar6 + iVar8 * 4);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar6 + 0xc);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x024eec50(uVar5,0,0);
          if (iVar6 == 0) {
            iVar6 = **(int **)(*piVar11 + 0x5c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x02c3d868(iVar6,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x02be9134(iVar6,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar6 + 0xc) <= uVar9) {
              func_0x014388e8();
            }
            iVar6 = *(int *)(iVar6 + iVar8 * 4);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x02c251d8(iVar6,0);
            if (iVar6 != 0) {
              iVar6 = **(int **)(*piVar11 + 0x5c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x02c3d868(iVar6,0);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x02be9134(iVar6,0);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(uint *)(iVar6 + 0xc) <= uVar9) {
                func_0x014388e8();
              }
              uVar5 = *(undefined4 *)(iVar6 + iVar8 * 4);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar1 + 8);
              uVar9 = *(uint *)(iVar1 + 0xc);
              piVar3 = *(int **)(_UNK_02ba3ad4 + 0x2ba35c0);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar10 = *piVar3;
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (uVar9 < *(uint *)(iVar6 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar9 + 1;
                puVar2 = (undefined4 *)(iVar6 + uVar9 * 4 + 0x10);
                *puVar2 = uVar5;
                func_0x014385cc(puVar2,uVar5);
              }
              else {
                func_0x0152874c(iVar1,uVar5,
                                *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) != 0) {
        func_0x0152da0c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02ba3ad8 + 0x2ba3640));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        iStack_50 = 0x7fffffff;
        puVar12 = *(undefined4 **)(_UNK_02ba3adc + 0x2ba3668);
        piVar11 = *(int **)(_UNK_02ba3ae0 + 0x2ba3670);
        puVar2 = *(undefined4 **)(_UNK_02ba3ae4 + 0x2ba3678);
        while (iVar8 = func_0x04878f14(&uStack_38,*puVar12), iVar1 = iStack_2c, iVar8 != 0) {
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0xc);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x024eec50(uVar5,0,0);
          if (iVar8 == 0) {
            iVar8 = *(int *)(iVar1 + 0xc);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar8 + 0x1c) != 0) {
              iVar8 = *(int *)(iVar1 + 0xc);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              iVar8 = *(int *)(iVar8 + 0x1c);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar8 + 0x1c) != 2) {
                if (*(int *)(*piVar11 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar8 = func_0x014e9518(*puVar2);
                iVar6 = *(int *)(iVar1 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                uVar5 = *(undefined4 *)(iVar6 + 0x1c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x02c4ab04(iVar8,uVar5,0);
                if (iVar8 != 0) {
                  iVar8 = *(int *)(iVar1 + 0xc);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar8 + 0x1c);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar8 + 0x7c);
                  if (((iVar8 != 0) && (1 < *(int *)(iVar8 + 0xc))) &&
                     (*(int *)(iVar8 + 0x14) <= iStack_50)) {
                    iStack_50 = *(int *)(iVar8 + 0x14);
                    if (*(uint *)(iVar8 + 0xc) < 2) {
                      func_0x014388e8();
                      iStack_50 = *(int *)(iVar8 + 0x14);
                    }
                    *piVar7 = iVar1;
                    func_0x014385cc(piVar7,iVar1);
                  }
                }
              }
            }
          }
        }
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02ba3af8 + 0x2ba37ec));
        if (*piVar7 != 0) {
          iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02ba3aec + 0x2ba3810));
          func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02ba3af0 + 0x2ba3824));
          iVar8 = *piVar7;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar8 + 0xc);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar5 = func_0x024eecb8(iVar8,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar1 + 8);
          uVar9 = *(uint *)(iVar1 + 0xc);
          piVar11 = *(int **)(_UNK_02ba3af4 + 0x2ba3888);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar6 = *piVar11;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (uVar9 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar9 + 1;
            puVar2 = (undefined4 *)(iVar8 + uVar9 * 4 + 0x10);
            *puVar2 = uVar5;
            func_0x014385cc(puVar2,uVar5);
          }
          else {
            func_0x0152874c(iVar1,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          }
          iVar6 = *piVar7;
          iVar8 = **(int **)(**(int **)(_UNK_02ba3b00 + 0x2ba38e0) + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0xc);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          piVar7 = (int *)func_0x024eecb8(iVar6,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar11 = (int *)0x0;
          if ((piVar7 != (int *)0x0) &&
             (piVar11 = piVar7, *piVar7 != **(int **)(_UNK_02ba3b04 + 0x2ba393c))) {
            piVar11 = (int *)0x0;
          }
          func_0x02b647b4(iVar8,100,piVar11,0,0,1,iVar1,0);
          iVar1 = **(int **)(**(int **)(_UNK_02ba3b08 + 0x2ba397c) + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b6127c(iVar1,100,0,0,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xebf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

