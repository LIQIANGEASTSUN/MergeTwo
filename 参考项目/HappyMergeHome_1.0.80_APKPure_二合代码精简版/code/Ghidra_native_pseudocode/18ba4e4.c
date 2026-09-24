
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018ca4e4(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_018cad20 + 0x18ca500);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cad24 + 0x18ca514));
    func_0x01438628(*(undefined4 *)(_UNK_018cad28 + 0x18ca520));
    func_0x01438628(*(undefined4 *)(_UNK_018cad2c + 0x18ca52c));
    func_0x01438628(*(undefined4 *)(_UNK_018cad30 + 0x18ca538));
    func_0x01438628(*(undefined4 *)(_UNK_018cad34 + 0x18ca544));
    func_0x01438628(*(undefined4 *)(_UNK_018cad38 + 0x18ca550));
    func_0x01438628(*(undefined4 *)(_UNK_018cad3c + 0x18ca55c));
    func_0x01438628(*(undefined4 *)(_UNK_018cad40 + 0x18ca568));
    func_0x01438628(*(undefined4 *)(_UNK_018cad44 + 0x18ca574));
    func_0x01438628(*(undefined4 *)(_UNK_018cad48 + 0x18ca580));
    func_0x01438628(*(undefined4 *)(_UNK_018cad4c + 0x18ca58c));
    func_0x01438628(*(undefined4 *)(_UNK_018cad50 + 0x18ca598));
    func_0x01438628(*(undefined4 *)(_UNK_018cad54 + 0x18ca5a4));
    func_0x01438628(*(undefined4 *)(_UNK_018cad58 + 0x18ca5b0));
    func_0x01438628(*(undefined4 *)(_UNK_018cad5c + 0x18ca5bc));
    func_0x01438628(*(undefined4 *)(_UNK_018cad60 + 0x18ca5c8));
    func_0x01438628(*(undefined4 *)(_UNK_018cad64 + 0x18ca5d4));
    func_0x01438628(*(undefined4 *)(_UNK_018cad68 + 0x18ca5e0));
    func_0x01438628(*(undefined4 *)(_UNK_018cad6c + 0x18ca5ec));
    func_0x01438628(*(undefined4 *)(_UNK_018cad70 + 0x18ca5f8));
    func_0x01438628(*(undefined4 *)(_UNK_018cad74 + 0x18ca604));
    func_0x01438628(*(undefined4 *)(_UNK_018cad78 + 0x18ca610));
    func_0x01438628(*(undefined4 *)(_UNK_018cad7c + 0x18ca61c));
    func_0x01438628(*(undefined4 *)(_UNK_018cad80 + 0x18ca628));
    func_0x01438628(*(undefined4 *)(_UNK_018cad84 + 0x18ca634));
    func_0x01438628(*(undefined4 *)(_UNK_018cad88 + 0x18ca640));
    func_0x01438628(*(undefined4 *)(_UNK_018cad8c + 0x18ca64c));
    func_0x01438628(*(undefined4 *)(_UNK_018cad90 + 0x18ca658));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x953b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018cad94 + 0x18ca6c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cad98 + 0x18ca6dc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018cad9c + 0x18ca6fc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x348);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018cada0 + 0x18ca730));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018cada4 + 0x18ca748));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_018cada8 + 0x18ca760));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_018cadac + 0x18ca790);
      do {
        if (*(int *)(**(int **)(_UNK_018cadb0 + 0x18ca79c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018cadb4 + 0x18ca7b8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_018cadb8 + 0x18ca7d8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x348);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_018cadbc + 0x18ca80c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_018cadc0 + 0x18ca838));
        if (*(int *)(**(int **)(_UNK_018cadc4 + 0x18ca850) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_018c893c(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_018cadc8 + 0x18ca8c4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_018cadcc + 0x18ca900));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_018cadd8 + 0x18ca974) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_018caddc + 0x18ca984)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_018cade0 + 0x18ca9d8));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_018cade4 + 0x18ca9ec));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_018cade8 + 0x18caa10));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_018cadec + 0x18caa3c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_018cadf0 + 0x18caa70) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018cadf4 + 0x18caa90));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_018cadf8 + 0x18caaec)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_018cadfc + 0x18cab2c);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_018cae00 + 0x18cab80));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_018cae0c + 0x18cabd8)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_018cae10 + 0x18cac04));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_018cae14 + 0x18cac24));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_018cae18 + 0x18cac50));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_018cadd0 + 0x18ca920));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_018cadd4 + 0x18ca95c));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x953b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

