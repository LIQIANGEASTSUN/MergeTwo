
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03010a64(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_0301129c + 0x3010a80);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030112a0 + 0x3010a94));
    func_0x01438628(*(undefined4 *)(_UNK_030112a4 + 0x3010aa0));
    func_0x01438628(*(undefined4 *)(_UNK_030112a8 + 0x3010aac));
    func_0x01438628(*(undefined4 *)(_UNK_030112ac + 0x3010ab8));
    func_0x01438628(*(undefined4 *)(_UNK_030112b0 + 0x3010ac4));
    func_0x01438628(*(undefined4 *)(_UNK_030112b4 + 0x3010ad0));
    func_0x01438628(*(undefined4 *)(_UNK_030112b8 + 0x3010adc));
    func_0x01438628(*(undefined4 *)(_UNK_030112bc + 0x3010ae8));
    func_0x01438628(*(undefined4 *)(_UNK_030112c0 + 0x3010af4));
    func_0x01438628(*(undefined4 *)(_UNK_030112c4 + 50400000));
    func_0x01438628(*(undefined4 *)(_UNK_030112c8 + 0x3010b0c));
    func_0x01438628(*(undefined4 *)(_UNK_030112cc + 0x3010b18));
    func_0x01438628(*(undefined4 *)(_UNK_030112d0 + 0x3010b24));
    func_0x01438628(*(undefined4 *)(_UNK_030112d4 + 0x3010b30));
    func_0x01438628(*(undefined4 *)(_UNK_030112d8 + 0x3010b3c));
    func_0x01438628(*(undefined4 *)(_UNK_030112dc + 0x3010b48));
    func_0x01438628(*(undefined4 *)(_UNK_030112e0 + 0x3010b54));
    func_0x01438628(*(undefined4 *)(_UNK_030112e4 + 0x3010b60));
    func_0x01438628(*(undefined4 *)(_UNK_030112e8 + 0x3010b6c));
    func_0x01438628(*(undefined4 *)(_UNK_030112ec + 0x3010b78));
    func_0x01438628(*(undefined4 *)(_UNK_030112f0 + 0x3010b84));
    func_0x01438628(*(undefined4 *)(_UNK_030112f4 + 0x3010b90));
    func_0x01438628(*(undefined4 *)(_UNK_030112f8 + 0x3010b9c));
    func_0x01438628(*(undefined4 *)(_UNK_030112fc + 0x3010ba8));
    func_0x01438628(*(undefined4 *)(_UNK_03011300 + 0x3010bb4));
    func_0x01438628(*(undefined4 *)(_UNK_03011304 + 0x3010bc0));
    func_0x01438628(*(undefined4 *)(_UNK_03011308 + 0x3010bcc));
    func_0x01438628(*(undefined4 *)(_UNK_0301130c + 0x3010bd8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x728b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03011310 + 0x3010c40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03011314 + 0x3010c5c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03011318 + 0x3010c7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x390);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_0301131c + 0x3010cb0));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03011320 + 0x3010cc8));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03011324 + 0x3010ce0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_03011328 + 0x3010d0c);
      do {
        if (*(int *)(**(int **)(_UNK_0301132c + 0x3010d18) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03011330 + 0x3010d34));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_03011334 + 0x3010d54));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x390);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uVar9,**(undefined4 **)(_UNK_03011338 + 0x3010d8c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_0301133c + 0x3010db8));
        if (*(int *)(**(int **)(_UNK_03011340 + 0x3010dd0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0300eebc(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03011344 + 0x3010e40));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_03011348 + 0x3010e7c));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_03011354 + 0x3010ef0) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03011358 + 0x3010f00));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = FUN_02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0301135c + 0x3010f54));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03011360 + 0x3010f68));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_03011364 + 0x3010f8c));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_03011368 + 0x3010fb8));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_0301136c + 0x3010fec) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03011370 + 0x301100c));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = FUN_029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_03011374 + 0x3011068)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_03011378 + 0x30110a8);
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
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_0301137c + 0x30110fc));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_03011388 + 0x3011154)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x046c26fc(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_0301138c + 0x3011180));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_03011390 + 0x30111a0));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar11,uVar2,**(undefined4 **)(_UNK_03011394 + 0x30111cc));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0301134c + 0x3010e9c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03011350 + 0x3010ed8));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x728b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

