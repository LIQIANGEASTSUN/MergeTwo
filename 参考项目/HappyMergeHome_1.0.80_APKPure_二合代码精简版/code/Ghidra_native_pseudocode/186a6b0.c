
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0187a6b0(undefined4 param_1,int param_2)

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
  int iVar10;
  undefined4 *puVar11;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_0187aeec + 0x187a6cc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187aef0 + 0x187a6e0));
    func_0x01438628(*(undefined4 *)(_UNK_0187aef4 + 0x187a6ec));
    func_0x01438628(*(undefined4 *)(_UNK_0187aef8 + 0x187a6f8));
    func_0x01438628(*(undefined4 *)(_UNK_0187aefc + 0x187a704));
    func_0x01438628(*(undefined4 *)(_UNK_0187af00 + 0x187a710));
    func_0x01438628(*(undefined4 *)(_UNK_0187af04 + 0x187a71c));
    func_0x01438628(*(undefined4 *)(_UNK_0187af08 + 0x187a728));
    func_0x01438628(*(undefined4 *)(_UNK_0187af0c + 0x187a734));
    func_0x01438628(*(undefined4 *)(_UNK_0187af10 + 0x187a740));
    func_0x01438628(*(undefined4 *)(_UNK_0187af14 + 0x187a74c));
    func_0x01438628(*(undefined4 *)(_UNK_0187af18 + 0x187a758));
    func_0x01438628(*(undefined4 *)(_UNK_0187af1c + 0x187a764));
    func_0x01438628(*(undefined4 *)(_UNK_0187af20 + 0x187a770));
    func_0x01438628(*(undefined4 *)(_UNK_0187af24 + 0x187a77c));
    func_0x01438628(*(undefined4 *)(_UNK_0187af28 + 0x187a788));
    func_0x01438628(*(undefined4 *)(_UNK_0187af2c + 0x187a794));
    func_0x01438628(*(undefined4 *)(_UNK_0187af30 + 0x187a7a0));
    func_0x01438628(*(undefined4 *)(_UNK_0187af34 + 0x187a7ac));
    func_0x01438628(*(undefined4 *)(_UNK_0187af38 + 0x187a7b8));
    func_0x01438628(*(undefined4 *)(_UNK_0187af3c + 0x187a7c4));
    func_0x01438628(*(undefined4 *)(_UNK_0187af40 + 0x187a7d0));
    func_0x01438628(*(undefined4 *)(_UNK_0187af44 + 0x187a7dc));
    func_0x01438628(*(undefined4 *)(_UNK_0187af48 + 0x187a7e8));
    func_0x01438628(*(undefined4 *)(_UNK_0187af4c + 0x187a7f4));
    func_0x01438628(*(undefined4 *)(_UNK_0187af50 + 0x187a800));
    func_0x01438628(*(undefined4 *)(_UNK_0187af54 + 0x187a80c));
    func_0x01438628(*(undefined4 *)(_UNK_0187af58 + 0x187a818));
    func_0x01438628(*(undefined4 *)(_UNK_0187af5c + 0x187a824));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x93c9,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0187af60 + 0x187a88c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187af64 + 0x187a8a8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0187af68 + 0x187a8c8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2f0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0187af6c + 0x187a8fc));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0187af70 + 0x187a914));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_0187af74 + 0x187a92c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_0187af78 + 0x187a95c);
      do {
        if (*(int *)(**(int **)(_UNK_0187af7c + 0x187a968) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0187af80 + 0x187a984));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0187af84 + 0x187a9a4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x2f0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_0187af88 + 0x187a9d8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_0187af8c + 0x187aa04));
        if (*(int *)(**(int **)(_UNK_0187af90 + 0x187aa1c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_01878b08(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0187af94 + 0x187aa90));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_0187af98 + 0x187aacc));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0187afa4 + 0x187ab40) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_0187afa8 + 0x187ab50)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0187afac + 0x187aba4));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_0187afb0 + 0x187abb8));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_0187afb4 + 0x187abdc));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_0187afb8 + 0x187ac08));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0187afbc + 0x187ac3c) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0187afc0 + 0x187ac5c));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_0187afc4 + 0x187acb8)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0187afc8 + 0x187acf8);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar10 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
                        *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_0187afcc + 0x187ad4c));
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
                    iVar10 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_0187afd8 + 0x187ada4)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_0187afdc + 0x187add0));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_0187afe0 + 0x187adf0));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_0187afe4 + 0x187ae1c));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_0187af9c + 0x187aaec));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_0187afa0 + 0x187ab28));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x93c9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

