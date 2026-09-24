
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032dba14(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_032dc250 + 0x32dba30);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032dc254 + 0x32dba44));
    func_0x01438628(*(undefined4 *)(_UNK_032dc258 + 0x32dba50));
    func_0x01438628(*(undefined4 *)(_UNK_032dc25c + 0x32dba5c));
    func_0x01438628(*(undefined4 *)(_UNK_032dc260 + 0x32dba68));
    func_0x01438628(*(undefined4 *)(_UNK_032dc264 + 0x32dba74));
    func_0x01438628(*(undefined4 *)(_UNK_032dc268 + 0x32dba80));
    func_0x01438628(*(undefined4 *)(_UNK_032dc26c + 0x32dba8c));
    func_0x01438628(*(undefined4 *)(_UNK_032dc270 + 0x32dba98));
    func_0x01438628(*(undefined4 *)(_UNK_032dc274 + 0x32dbaa4));
    func_0x01438628(*(undefined4 *)(_UNK_032dc278 + 0x32dbab0));
    func_0x01438628(*(undefined4 *)(_UNK_032dc27c + 0x32dbabc));
    func_0x01438628(*(undefined4 *)(_UNK_032dc280 + 0x32dbac8));
    func_0x01438628(*(undefined4 *)(_UNK_032dc284 + 0x32dbad4));
    func_0x01438628(*(undefined4 *)(_UNK_032dc288 + 0x32dbae0));
    func_0x01438628(*(undefined4 *)(_UNK_032dc28c + 0x32dbaec));
    func_0x01438628(*(undefined4 *)(_UNK_032dc290 + 0x32dbaf8));
    func_0x01438628(*(undefined4 *)(_UNK_032dc294 + 0x32dbb04));
    func_0x01438628(*(undefined4 *)(_UNK_032dc298 + 0x32dbb10));
    func_0x01438628(*(undefined4 *)(_UNK_032dc29c + 0x32dbb1c));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2a0 + 0x32dbb28));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2a4 + 0x32dbb34));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2a8 + 0x32dbb40));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2ac + 0x32dbb4c));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2b0 + 0x32dbb58));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2b4 + 0x32dbb64));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2b8 + 0x32dbb70));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2bc + 0x32dbb7c));
    func_0x01438628(*(undefined4 *)(_UNK_032dc2c0 + 0x32dbb88));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x83c1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032dc2c4 + 0x32dbbf0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032dc2c8 + 0x32dbc0c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032dc2cc + 0x32dbc2c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x32c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032dc2d0 + 0x32dbc60));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032dc2d4 + 0x32dbc78));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_032dc2d8 + 0x32dbc90));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_032dc2dc + 0x32dbcc0);
      do {
        if (*(int *)(**(int **)(_UNK_032dc2e0 + 0x32dbccc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032dc2e4 + 0x32dbce8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_032dc2e8 + 0x32dbd08));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x32c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_032dc2ec + 0x32dbd3c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_032dc2f0 + 0x32dbd68));
        if (*(int *)(**(int **)(_UNK_032dc2f4 + 0x32dbd80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_032d9e60(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_032dc2f8 + 0x32dbdf4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_032dc2fc + 0x32dbe30));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_032dc308 + 0x32dbea4) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_032dc30c + 0x32dbeb4)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032dc310 + 0x32dbf08));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_032dc314 + 0x32dbf1c));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_032dc318 + 0x32dbf40));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_032dc31c + 0x32dbf6c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_032dc320 + 0x32dbfa0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_032dc324 + 0x32dbfc0));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_032dc328 + 0x32dc01c)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_032dc32c + 0x32dc05c);
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
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_032dc330 + 0x32dc0b0));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_032dc33c + 0x32dc108)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_032dc340 + 0x32dc134));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_032dc344 + 0x32dc154));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_032dc348 + 0x32dc180));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_032dc300 + 0x32dbe50));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_032dc304 + 0x32dbe8c));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x83c1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

