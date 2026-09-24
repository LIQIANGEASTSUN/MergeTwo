
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0318905c(int param_1)

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
  
  pcVar6 = (char *)(_UNK_031891c0 + 0x3189070);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031891c4 + 0x3189084));
    func_0x01438628(*(undefined4 *)(_UNK_031891c8 + 0x3189090));
    func_0x01438628(*(undefined4 *)(_UNK_031891cc + 0x318909c));
    func_0x01438628(*(undefined4 *)(_UNK_031891d0 + 0x31890a8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7bad,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_031891d4 + 0x3189100) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031891d8 + 0x318911c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0xc))) {
      iVar5 = FUN_0317e7f4(param_1);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x6c);
      iVar2 = func_0x04cfd760(iVar2,0,**(undefined4 **)(_UNK_031891dc + 0x3189170));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x026ec598(iVar5,iVar2 == 1,0);
    }
    pcVar6 = (char *)(_UNK_031896a8 + 0x31891f8);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031896ac + 0x318920c));
      func_0x01438628(*(undefined4 *)(_UNK_031896b0 + 0x3189218));
      func_0x01438628(*(undefined4 *)(_UNK_031896b4 + 0x3189224));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x2035,0);
    if (iVar2 == 0) {
      iVar2 = FUN_0317e7f4(param_1);
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
        puVar10 = *(undefined4 **)(_UNK_031896b8 + 0x31892cc);
        puVar11 = *(undefined4 **)(_UNK_031896bc + 0x31892d4);
        while( true ) {
          iVar3 = FUN_0317e7f4(param_1);
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
          iVar3 = FUN_0317e7f4(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar3 + 0x10);
          iVar3 = FUN_0317e7f4(param_1);
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
            iVar3 = FUN_0317e7f4(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x6c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar3 + 9) != '\0') {
              iVar3 = FUN_0317e7f4(param_1);
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
            iVar3 = FUN_0317e7f4(param_1);
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
            iVar3 = FUN_0317e7f4(param_1);
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
          iVar3 = FUN_0317e7f4(param_1);
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
LAB_03189650:
            bVar9 = false;
          }
          else {
            iVar3 = FUN_0317e7f4(param_1);
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
            if (*(char *)(iVar3 + 0xd) == '\0') goto LAB_03189650;
            iVar3 = FUN_0317e7f4(param_1);
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
          iVar2 = FUN_0317e7f4(param_1);
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
    iVar2 = func_0x029540a4(0x2035,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x7bad,0);
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

