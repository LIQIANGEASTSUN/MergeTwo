
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0308624c(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_03086a88 + 0x3086268);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03086a8c + 0x308627c));
    func_0x01438628(*(undefined4 *)(_UNK_03086a90 + 0x3086288));
    func_0x01438628(*(undefined4 *)(_UNK_03086a94 + 0x3086294));
    func_0x01438628(*(undefined4 *)(_UNK_03086a98 + 0x30862a0));
    func_0x01438628(*(undefined4 *)(_UNK_03086a9c + 0x30862ac));
    func_0x01438628(*(undefined4 *)(_UNK_03086aa0 + 0x30862b8));
    func_0x01438628(*(undefined4 *)(_UNK_03086aa4 + 0x30862c4));
    func_0x01438628(*(undefined4 *)(_UNK_03086aa8 + 0x30862d0));
    func_0x01438628(*(undefined4 *)(_UNK_03086aac + 0x30862dc));
    func_0x01438628(*(undefined4 *)(_UNK_03086ab0 + 0x30862e8));
    func_0x01438628(*(undefined4 *)(_UNK_03086ab4 + 0x30862f4));
    func_0x01438628(*(undefined4 *)(_UNK_03086ab8 + 0x3086300));
    func_0x01438628(*(undefined4 *)(_UNK_03086abc + 0x308630c));
    func_0x01438628(*(undefined4 *)(_UNK_03086ac0 + 0x3086318));
    func_0x01438628(*(undefined4 *)(_UNK_03086ac4 + 0x3086324));
    func_0x01438628(*(undefined4 *)(_UNK_03086ac8 + 0x3086330));
    func_0x01438628(*(undefined4 *)(_UNK_03086acc + 0x308633c));
    func_0x01438628(*(undefined4 *)(_UNK_03086ad0 + 0x3086348));
    func_0x01438628(*(undefined4 *)(_UNK_03086ad4 + 0x3086354));
    func_0x01438628(*(undefined4 *)(_UNK_03086ad8 + 0x3086360));
    func_0x01438628(*(undefined4 *)(_UNK_03086adc + 0x308636c));
    func_0x01438628(*(undefined4 *)(_UNK_03086ae0 + 0x3086378));
    func_0x01438628(*(undefined4 *)(_UNK_03086ae4 + 0x3086384));
    func_0x01438628(*(undefined4 *)(_UNK_03086ae8 + 0x3086390));
    func_0x01438628(*(undefined4 *)(_UNK_03086aec + 0x308639c));
    func_0x01438628(*(undefined4 *)(_UNK_03086af0 + 0x30863a8));
    func_0x01438628(*(undefined4 *)(_UNK_03086af4 + 0x30863b4));
    func_0x01438628(*(undefined4 *)(_UNK_03086af8 + 0x30863c0));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x75a7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03086afc + 0x3086428) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03086b00 + 0x3086444));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03086b04 + 0x3086464));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 900);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03086b08 + 0x3086498));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03086b0c + 0x30864b0));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03086b10 + 0x30864c8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_03086b14 + 0x30864f8);
      do {
        if (*(int *)(**(int **)(_UNK_03086b18 + 0x3086504) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03086b1c + 0x3086520));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_03086b20 + 0x3086540));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 900);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_03086b24 + 0x3086574));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_03086b28 + 0x30865a0));
        if (*(int *)(**(int **)(_UNK_03086b2c + 0x30865b8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_03084698(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03086b30 + 0x308662c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_03086b34 + 0x3086668));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_03086b40 + 0x30866dc) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_03086b44 + 0x30866ec)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = FUN_02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03086b48 + 0x3086740));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03086b4c + 0x3086754));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_03086b50 + 0x3086778));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_03086b54 + 0x30867a4));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_03086b58 + 0x30867d8) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03086b5c + 0x30867f8));
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
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_03086b60 + 0x3086854)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_03086b64 + 0x3086894);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_03086b68 + 0x30868e8));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_03086b74 + 0x3086940)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_03086b78 + 0x308696c));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_03086b7c + 0x308698c));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_03086b80 + 0x30869b8));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03086b38 + 0x3086688));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03086b3c + 0x30866c4));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x75a7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

