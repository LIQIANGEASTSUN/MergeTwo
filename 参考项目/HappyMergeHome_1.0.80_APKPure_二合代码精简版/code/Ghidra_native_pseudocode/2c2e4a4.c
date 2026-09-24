
/* WARNING: Removing unreachable block (ram,0x02b0eb7c) */
/* WARNING: Removing unreachable block (ram,0x02b0eb94) */
/* WARNING: Removing unreachable block (ram,0x02b0eb98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3e4a4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02c3e64c + 0x2c3e4c4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3e650 + 0x2c3e4dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e654 + 0x2c3e4e8));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x02953fd4(0xe78,0);
  if (iVar4 == 0) {
    if (param_4 != 0) goto LAB_02c3e570;
    iVar4 = FUN_02c3a9c4(param_1);
    if (iVar4 == param_2) {
      if (param_2 == 3) {
        if (*(int *)(param_1 + 0x14) < 0) goto LAB_02c3e570;
        iVar8 = 0;
        piVar14 = *(int **)(_UNK_02c3e658 + 0x2c3e59c);
        puVar13 = *(undefined4 **)(_UNK_02c3e65c + 0x2c3e5a4);
        while( true ) {
          if (*(int *)(*piVar14 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar13);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02be0a54(iVar4,param_3,0);
          if (iVar4 <= iVar8) goto LAB_02c3e570;
          if (*(int *)(*piVar14 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar13);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02be0b0c(iVar4,iVar8,param_3,0);
          if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 8), iVar4 == *(int *)(param_1 + 0x14)))
          break;
          iVar8 = iVar8 + 1;
        }
      }
      else if (param_2 == 2 || param_2 == 1) {
LAB_02c3e570:
        pcVar7 = (char *)(_UNK_02c3e730 + 0x2c3e674);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c3e734 + 0x2c3e688));
          func_0x01438628(*(undefined4 *)(_UNK_02c3e738 + 0x2c3e694));
          *pcVar7 = '\x01';
        }
        iVar4 = func_0x02953fd4(0xe79,0);
        if (iVar4 == 0) {
          FUN_02c3c8b4(param_1);
          if (*(int *)(**(int **)(_UNK_02c3e73c + 0x2c3e6f4) + 0x74) == 0) {
            func_0x014387a4();
          }
          param_1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3e740 + 0x2c3e710));
          if (param_1 == 0) {
            func_0x014388e4();
          }
          pcVar7 = (char *)(_UNK_02c3954c + 0x2c391d4);
          if (*pcVar7 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02c39550 + 0x2c391e8));
            func_0x01438628(*(undefined4 *)(_UNK_02c39554 + 0x2c391f4));
            func_0x01438628(*(undefined4 *)(_UNK_02c39558 + 0x2c39200));
            func_0x01438628(*(undefined4 *)(_UNK_02c3955c + 0x2c3920c));
            func_0x01438628(*(undefined4 *)(_UNK_02c39560 + 0x2c39218));
            *pcVar7 = '\x01';
          }
          iVar4 = func_0x02953fd4(0xa06,0);
          if (iVar4 == 0) {
            piVar14 = *(int **)(_UNK_02c39564 + 0x2c39274);
            if (*(int *)(*piVar14 + 0x74) == 0) {
              func_0x014387a4();
            }
            puVar13 = *(undefined4 **)(_UNK_02c39568 + 0x2c39290);
            iVar4 = func_0x014e9518(*puVar13);
            piVar12 = *(int **)(_UNK_02c3956c + 0x2c392a4);
            iVar8 = *piVar12;
            if (*(int *)(iVar8 + 0x74) == 0) {
              func_0x014387a4();
              iVar8 = *piVar12;
            }
            uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x194);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            piVar2 = (int *)func_0x02b0fc08(iVar4,uVar9,0);
            piVar3 = (int *)0x0;
            if (piVar2 != (int *)0x0) {
              uVar6 = (uint)*(byte *)(**(int **)(_UNK_02c39570 + 0x2c392f4) + 0xb8);
              if ((uVar6 <= *(byte *)(*piVar2 + 0xb8)) &&
                 (piVar3 = piVar2,
                 *(int *)(*(int *)(*piVar2 + 100) + uVar6 * 4 + -4) !=
                 **(int **)(_UNK_02c39570 + 0x2c392f4))) {
                piVar3 = (int *)0x0;
              }
            }
            if (*(int *)(**(int **)(_UNK_02c39574 + 0x2c3932c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x024ef144(piVar3,0,0);
            if (iVar4 != 0) {
              if (piVar3 == (int *)0x0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024eecb8(piVar3,0);
              iVar8 = func_0x02b1cc10(0);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              iVar8 = *(int *)(iVar8 + 0x18);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024ef308(iVar8,0);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              func_0x024ef854(iVar4,uVar9,0);
              if (piVar3 == (int *)0x0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024eecb8(piVar3,0);
              pcVar7 = (char *)(_UNK_02c39578 + 0x2c393ec);
              if (*pcVar7 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_02c3957c + 0x2c39400));
                *pcVar7 = '\x01';
              }
              piVar2 = *(int **)(_UNK_02c39580 + 0x2c39418);
              puVar13 = *(undefined4 **)(*piVar2 + 0x5c);
              uVar9 = *puVar13;
              uVar5 = puVar13[1];
              uVar11 = puVar13[2];
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iStack_28 = 0;
              func_0x024ef0bc(iVar4,uVar9,uVar5,uVar11);
              if (piVar3 == (int *)0x0) {
                func_0x014388e4();
              }
              iVar4 = func_0x014e94d8(piVar3,0);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024ef308(iVar4,0);
              pcVar7 = (char *)(_UNK_02c39584 + 0x2c39488);
              if (*pcVar7 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_02c39588 + 0x2c3949c));
                *pcVar7 = '\x01';
              }
              iVar8 = *(int *)(*piVar2 + 0x5c);
              uVar9 = *(undefined4 *)(iVar8 + 0xc);
              uVar5 = *(undefined4 *)(iVar8 + 0x10);
              uVar11 = *(undefined4 *)(iVar8 + 0x14);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iStack_28 = 0;
              func_0x024ef328(iVar4,uVar9,uVar5,uVar11);
              puVar13 = *(undefined4 **)(_UNK_02c3958c + 0x2c394e8);
            }
            if (*(int *)(*piVar14 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(*puVar13);
            iVar8 = *piVar12;
            if (*(int *)(iVar8 + 0x74) == 0) {
              func_0x014387a4();
              iVar8 = *piVar12;
            }
            uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x194);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            pcVar7 = (char *)(_UNK_02b0ed3c + 0x2b0ea68);
            if (*pcVar7 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02b0ed40 + 0x2b0ea7c),uVar9,0,0);
              func_0x01438628(*(undefined4 *)(_UNK_02b0ed44 + 0x2b0ea88));
              func_0x01438628(*(undefined4 *)(_UNK_02b0ed48 + 0x2b0ea94));
              func_0x01438628(*(undefined4 *)(_UNK_02b0ed4c + 0x2b0eaa0));
              func_0x01438628(*(undefined4 *)(_UNK_02b0ed50 + 0x2b0eaac));
              func_0x01438628(*(undefined4 *)(_UNK_02b0ed54 + 0x2b0eab8));
              *pcVar7 = '\x01';
            }
            iVar8 = func_0x02953fd4(399,0);
            if (iVar8 == 0) {
              iVar8 = *(int *)(iVar4 + 0x10);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x0475561c(iVar8,uVar9,&stack0xffffffe4,
                                      **(undefined4 **)(_UNK_02b0ed58 + 0x2b0eb40));
              iVar8 = 0;
              if (iVar1 != 0) {
                func_0x014388e4();
                func_0x02b20eec(0,0,0);
                iVar1 = *(int *)(iVar4 + 0x14);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar8 = 1;
                if (0 < *(int *)(iVar1 + 0xc)) {
                  iVar1 = *(int *)(iVar4 + 0x14);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  puVar13 = *(undefined4 **)(_UNK_02b0ed60 + 0x2b0ebf0);
                  piVar14 = (int *)func_0x03b680f4(iVar1,*puVar13);
                  if (piVar14 == (int *)0x0) {
                    func_0x014388e4();
                  }
                  iVar1 = (**(code **)(*piVar14 + 0xc0))(piVar14,0,*(undefined4 *)(*piVar14 + 0xc4))
                  ;
                  if (iVar1 != 0) {
                    do {
                      iVar1 = *(int *)(iVar4 + 0x14);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b68138(iVar1,**(undefined4 **)(_UNK_02b0ed64 + 0x2b0ec44));
                      iVar1 = *(int *)(iVar4 + 0x14);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      if (*(int *)(iVar1 + 0xc) < 1) break;
                      iVar10 = *(int *)(iVar4 + 0x14);
                      iVar1 = *(int *)(iVar4 + 0x10);
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      iVar10 = func_0x03b680f4(iVar10,*puVar13);
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      uVar9 = func_0x02b20568(iVar10,0);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      iVar1 = func_0x04753c80(iVar1,uVar9,
                                              **(undefined4 **)(_UNK_02b0ed68 + 0x2b0ecc4));
                    } while (iVar1 == 0);
                    iVar1 = *(int *)(iVar4 + 0x14);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    if (0 < *(int *)(iVar1 + 0xc)) {
                      iVar1 = *(int *)(iVar4 + 0x14);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      iVar1 = func_0x03b680f4(iVar1,*puVar13);
                      if (iVar1 == 0) {
                        func_0x014388e4();
                      }
                      func_0x02b21408(iVar1,0);
                    }
                  }
                }
              }
              func_0x02b0effc(iVar4);
            }
            else {
              iVar8 = func_0x029540a4(399,0);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              iVar8 = func_0x0286e8b4(iVar8,iVar4,uVar9,0);
            }
            return iVar8;
          }
          iVar4 = func_0x029540a4(0xa06,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
        }
        else {
          iVar4 = func_0x029540a4(0xe79,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        func_0x024f56c0(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        iStack_28 = uStack_40;
        uStack_24 = uStack_3c;
        if (*(int *)(iVar4 + 0x10) != 0) {
          func_0x01523a6c(&uStack_30,*(int *)(iVar4 + 0x10),0);
        }
        func_0x01523a6c(&uStack_30,param_1,0);
        iVar8 = *(int *)(iVar4 + 8);
        uVar9 = *(undefined4 *)(iVar4 + 0xc);
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        uVar5 = 2;
        if (iVar4 == 0) {
          uVar5 = 1;
        }
        iVar4 = func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar5,0,0);
        return iVar4;
      }
    }
  }
  else {
    iVar4 = func_0x029540a4(0xe78,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    iVar4 = func_0x02894e44(iVar4,param_1,param_2,param_3);
  }
  return iVar4;
}

