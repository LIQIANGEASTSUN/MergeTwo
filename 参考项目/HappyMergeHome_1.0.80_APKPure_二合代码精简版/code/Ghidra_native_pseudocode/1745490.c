
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01755490(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01755cc8 + 0x17554ac);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01755ccc + 0x17554c0));
    func_0x01438628(*(undefined4 *)(_UNK_01755cd0 + 0x17554cc));
    func_0x01438628(*(undefined4 *)(_UNK_01755cd4 + 0x17554d8));
    func_0x01438628(*(undefined4 *)(_UNK_01755cd8 + 0x17554e4));
    func_0x01438628(*(undefined4 *)(_UNK_01755cdc + 0x17554f0));
    func_0x01438628(*(undefined4 *)(_UNK_01755ce0 + 0x17554fc));
    func_0x01438628(*(undefined4 *)(_UNK_01755ce4 + 0x1755508));
    func_0x01438628(*(undefined4 *)(_UNK_01755ce8 + 0x1755514));
    func_0x01438628(*(undefined4 *)(_UNK_01755cec + 0x1755520));
    func_0x01438628(*(undefined4 *)(_UNK_01755cf0 + 0x175552c));
    func_0x01438628(*(undefined4 *)(_UNK_01755cf4 + 0x1755538));
    func_0x01438628(*(undefined4 *)(_UNK_01755cf8 + 0x1755544));
    func_0x01438628(*(undefined4 *)(_UNK_01755cfc + 0x1755550));
    func_0x01438628(*(undefined4 *)(_UNK_01755d00 + 0x175555c));
    func_0x01438628(*(undefined4 *)(_UNK_01755d04 + 0x1755568));
    func_0x01438628(*(undefined4 *)(_UNK_01755d08 + 0x1755574));
    func_0x01438628(*(undefined4 *)(_UNK_01755d0c + 0x1755580));
    func_0x01438628(*(undefined4 *)(_UNK_01755d10 + 0x175558c));
    func_0x01438628(*(undefined4 *)(_UNK_01755d14 + 0x1755598));
    func_0x01438628(*(undefined4 *)(_UNK_01755d18 + 0x17555a4));
    func_0x01438628(*(undefined4 *)(_UNK_01755d1c + 0x17555b0));
    func_0x01438628(*(undefined4 *)(_UNK_01755d20 + 0x17555bc));
    func_0x01438628(*(undefined4 *)(_UNK_01755d24 + 0x17555c8));
    func_0x01438628(*(undefined4 *)(_UNK_01755d28 + 0x17555d4));
    func_0x01438628(*(undefined4 *)(_UNK_01755d2c + 0x17555e0));
    func_0x01438628(*(undefined4 *)(_UNK_01755d30 + 0x17555ec));
    func_0x01438628(*(undefined4 *)(_UNK_01755d34 + 0x17555f8));
    func_0x01438628(*(undefined4 *)(_UNK_01755d38 + 0x1755604));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8d0c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01755d3c + 0x175566c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01755d40 + 0x1755688));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01755d44 + 0x17556a8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x394);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01755d48 + 0x17556dc));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01755d4c + 0x17556f4));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01755d50 + 0x175570c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_01755d54 + 0x1755738);
      do {
        if (*(int *)(**(int **)(_UNK_01755d58 + 0x1755744) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01755d5c + 0x1755760));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_01755d60 + 0x1755780));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x394);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01755d64 + 0x17557b8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01755d68 + 0x17557e4));
        if (*(int *)(**(int **)(_UNK_01755d6c + 0x17557fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_017538dc(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01755d70 + 0x175586c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01755d74 + 0x17558a8));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_01755d80 + 0x175591c) + 0x5c);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01755d84 + 0x175592c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01755d88 + 0x1755980));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01755d8c + 0x1755994));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01755d90 + 0x17559b8));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01755d94 + 0x17559e4));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_01755d98 + 0x1755a18) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01755d9c + 0x1755a38));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_01755da0 + 0x1755a94)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_01755da4 + 0x1755ad4);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar11 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar10 + 1;
                        *(undefined4 *)(iVar7 + uVar10 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01755da8 + 0x1755b28));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_01755db4 + 0x1755b80)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x024f0540(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_01755db8 + 0x1755bac));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_01755dbc + 0x1755bcc));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_01755dc0 + 0x1755bf8));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01755d78 + 0x17558c8));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01755d7c + 0x1755904));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8d0c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

