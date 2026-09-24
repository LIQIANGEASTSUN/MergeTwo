
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0301516c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_030155b0 + 0x3015184);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030155b4 + 0x3015198));
    func_0x01438628(*(undefined4 *)(_UNK_030155b8 + 0x30151a4));
    func_0x01438628(*(undefined4 *)(_UNK_030155bc + 0x30151b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2117,0);
  if (iVar1 == 0) {
    iVar1 = FUN_03009c84(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x6c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x14) == '\0') {
      bVar8 = true;
      iVar1 = 0;
      iVar4 = 0;
      puVar9 = *(undefined4 **)(_UNK_030155c0 + 0x3015258);
      puVar10 = *(undefined4 **)(_UNK_030155c4 + 0x3015260);
      while( true ) {
        iVar2 = FUN_03009c84(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x6c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar1) break;
        iVar2 = FUN_03009c84(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x6c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar2 + 0x10);
        iVar2 = FUN_03009c84(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x6c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 0x24);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x04cd2d7c(iVar7,uVar6,*puVar10);
        if (iVar2 != 0) {
          iVar2 = FUN_03009c84(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar2 + 9) != '\0') {
            iVar2 = FUN_03009c84(param_1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x6c);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar4 = iVar4 + (*(byte *)(iVar2 + 0xd) ^ 1);
          }
          iVar2 = FUN_03009c84(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar9);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar4 = iVar4 + (*(byte *)(iVar2 + 0xc) ^ 1);
        }
        iVar2 = FUN_03009c84(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x6c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar2 + 0xc) == '\0') {
          bVar8 = false;
        }
        else {
          iVar2 = FUN_03009c84(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar9);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar2 + 0xd) == '\0') {
            bVar8 = false;
          }
        }
        iVar1 = iVar1 + 1;
      }
      if (bVar8) {
        iVar1 = FUN_03009c84(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x6c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0xc)) {
          iVar1 = FUN_03009c84(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x6c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          FUN_026f040c(iVar1,1,0);
        }
      }
      *(int *)(param_1 + 0x54) = iVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    return;
  }
  iVar1 = func_0x029540a4(0x2117,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
  return;
}

