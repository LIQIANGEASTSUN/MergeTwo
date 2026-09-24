
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03247660(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_032477c4 + 0x3247674);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032477c8 + 0x3247688));
    func_0x01438628(*(undefined4 *)(_UNK_032477cc + 0x3247694));
    func_0x01438628(*(undefined4 *)(_UNK_032477d0 + 0x32476a0));
    func_0x01438628(*(undefined4 *)(_UNK_032477d4 + 0x32476ac));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1fb3,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_032477d8 + 0x3247704) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032477dc + 0x3247720));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0xc))) {
      iVar5 = FUN_0323c5d0(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x6c);
      iVar2 = func_0x04cfd760(iVar2,0,**(undefined4 **)(_UNK_032477e0 + 0x3247774));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x026ec598(iVar5,iVar2 == 1,0);
    }
    pcVar6 = (char *)(_UNK_03247cac + 0x32477fc);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03247cb0 + 0x3247810));
      func_0x01438628(*(undefined4 *)(_UNK_03247cb4 + 0x324781c));
      func_0x01438628(*(undefined4 *)(_UNK_03247cb8 + 0x3247828));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x1fb5,0);
    if (iVar2 == 0) {
      iVar2 = FUN_0323c5d0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x6c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar2 + 0x14) == '\0') {
        bVar9 = true;
        iVar2 = 0;
        iVar5 = 0;
        puVar10 = *(undefined4 **)(_UNK_03247cbc + 0x32478d0);
        puVar11 = *(undefined4 **)(_UNK_03247cc0 + 0x32478d8);
        while( true ) {
          iVar3 = FUN_0323c5d0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar2) break;
          iVar3 = FUN_0323c5d0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar3 + 0x10);
          iVar3 = FUN_0323c5d0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar3 + 0x24);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x04cd2d7c(iVar8,uVar7,*puVar11);
          if (iVar3 != 0) {
            iVar3 = FUN_0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 9) != '\0') {
              iVar3 = FUN_0323c5d0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x6c);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0xc);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar5 = iVar5 + (*(byte *)(iVar3 + 0xd) ^ 1);
            }
            iVar3 = FUN_0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            bVar1 = *(byte *)(iVar3 + 0xc);
            iVar3 = FUN_0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar5 = iVar5 + (bVar1 ^ 1) + (*(byte *)(iVar3 + 0x28) ^ 1);
          }
          iVar3 = FUN_0323c5d0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar3 + 0xc) == '\0') {
LAB_03247c54:
            bVar9 = false;
          }
          else {
            iVar3 = FUN_0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 0xd) == '\0') goto LAB_03247c54;
            iVar3 = FUN_0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0xc);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 0x28) == '\0') {
              bVar9 = false;
            }
          }
          iVar2 = iVar2 + 1;
        }
        if (bVar9) {
          iVar2 = FUN_0323c5d0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x026ec720(iVar2,1,0);
        }
        *(int *)(param_1 + 0x54) = iVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      return;
    }
    iVar2 = func_0x029540a4(0x1fb5,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x1fb3,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
  return;
}

