
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03210918(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_03211154 + 0x3210934);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03211158 + 0x3210948));
    func_0x01438628(*(undefined4 *)(_UNK_0321115c + 0x3210954));
    func_0x01438628(*(undefined4 *)(_UNK_03211160 + 0x3210960));
    func_0x01438628(*(undefined4 *)(_UNK_03211164 + 0x321096c));
    func_0x01438628(*(undefined4 *)(_UNK_03211168 + 0x3210978));
    func_0x01438628(*(undefined4 *)(_UNK_0321116c + 0x3210984));
    func_0x01438628(*(undefined4 *)(_UNK_03211170 + 0x3210990));
    func_0x01438628(*(undefined4 *)(_UNK_03211174 + 0x321099c));
    func_0x01438628(*(undefined4 *)(_UNK_03211178 + 0x32109a8));
    func_0x01438628(*(undefined4 *)(_UNK_0321117c + 0x32109b4));
    func_0x01438628(*(undefined4 *)(_UNK_03211180 + 0x32109c0));
    func_0x01438628(*(undefined4 *)(_UNK_03211184 + 0x32109cc));
    func_0x01438628(*(undefined4 *)(_UNK_03211188 + 0x32109d8));
    func_0x01438628(*(undefined4 *)(_UNK_0321118c + 0x32109e4));
    func_0x01438628(*(undefined4 *)(_UNK_03211190 + 0x32109f0));
    func_0x01438628(*(undefined4 *)(_UNK_03211194 + 0x32109fc));
    func_0x01438628(*(undefined4 *)(_UNK_03211198 + 0x3210a08));
    func_0x01438628(*(undefined4 *)(_UNK_0321119c + 0x3210a14));
    func_0x01438628(*(undefined4 *)(_UNK_032111a0 + 0x3210a20));
    func_0x01438628(*(undefined4 *)(_UNK_032111a4 + 0x3210a2c));
    func_0x01438628(*(undefined4 *)(_UNK_032111a8 + 0x3210a38));
    func_0x01438628(*(undefined4 *)(_UNK_032111ac + 0x3210a44));
    func_0x01438628(*(undefined4 *)(_UNK_032111b0 + 0x3210a50));
    func_0x01438628(*(undefined4 *)(_UNK_032111b4 + 0x3210a5c));
    func_0x01438628(*(undefined4 *)(_UNK_032111b8 + 0x3210a68));
    func_0x01438628(*(undefined4 *)(_UNK_032111bc + 0x3210a74));
    func_0x01438628(*(undefined4 *)(_UNK_032111c0 + 0x3210a80));
    func_0x01438628(*(undefined4 *)(_UNK_032111c4 + 0x3210a8c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7e90,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032111c8 + 0x3210af4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032111cc + 0x3210b10));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032111d0 + 0x3210b30));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2b8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032111d4 + 0x3210b64));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032111d8 + 0x3210b7c));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_032111dc + 0x3210b94));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_032111e0 + 0x3210bc4);
      do {
        if (*(int *)(**(int **)(_UNK_032111e4 + 0x3210bd0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032111e8 + 0x3210bec));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_032111ec + 0x3210c0c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x2b8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_032111f0 + 0x3210c40));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_032111f4 + 0x3210c6c));
        if (*(int *)(**(int **)(_UNK_032111f8 + 0x3210c84) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0320efc0(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_032111fc + 0x3210cf8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_03211200 + 0x3210d34));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0321120c + 0x3210da8) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_03211210 + 0x3210db8)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03211214 + 0x3210e0c));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03211218 + 0x3210e20));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_0321121c + 0x3210e44));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_03211220 + 0x3210e70));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_03211224 + 0x3210ea4) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03211228 + 0x3210ec4));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_0321122c + 0x3210f20)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_03211230 + 0x3210f60);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_03211234 + 0x3210fb4));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_03211240 + 0x321100c)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_03211244 + 0x3211038));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_03211248 + 0x3211058));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_0321124c + 0x3211084));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03211204 + 0x3210d54));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03211208 + 0x3210d90));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7e90,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

