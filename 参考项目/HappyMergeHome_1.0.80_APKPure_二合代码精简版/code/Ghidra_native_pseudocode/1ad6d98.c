
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae6d98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01ae704c + 0x1ae6db0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae7050 + 0x1ae6dc4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7054 + 0x1ae6dd0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7058 + 0x1ae6ddc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae705c + 0x1ae6de8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7060 + 0x1ae6df4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7064 + 0x1ae6e00));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7068 + 0x1ae6e0c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae706c + 0x1ae6e18));
    func_0x01438628(*(undefined4 *)(_UNK_01ae7070 + 0x1ae6e24));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa49d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa49d,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01ae4524();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01ae7074 + 0x1ae6e94));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ae7078 + 0x1ae6eac));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01ae707c + 0x1ae6ec4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar8 = *(undefined4 **)(_UNK_01ae7080 + 0x1ae6ef0);
    puVar9 = *(undefined4 **)(_UNK_01ae7084 + 0x1ae6ef8);
    puVar10 = *(undefined4 **)(_UNK_01ae7088 + 0x1ae6f00);
    do {
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
LAB_01ae6f3c:
        iVar5 = FUN_01ae4524();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x0152983c(iVar1,uVar6,*puVar8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar9);
        if (iVar5 != 0) {
          iVar4 = *(int *)(iVar5 + 0x18);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x024f109c(iVar4,*puVar10);
          if (iVar4 == 0) {
            iVar5 = *(int *)(iVar5 + 0x18);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0xc);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar5 + 0xc) == 0) {
              iVar5 = FUN_01ae4524();
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x0152983c(iVar1,uVar6,*puVar8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_01ae708c + 0x1ae7030));
            }
          }
        }
      }
      else {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x0152983c(iVar1,uVar6,*puVar8);
        iVar5 = func_0x014e9678(iVar5,uVar7,0);
        if (iVar5 == 0) goto LAB_01ae6f3c;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

