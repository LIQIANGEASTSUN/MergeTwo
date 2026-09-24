
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b59134(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01b592c4 + 0x1b59144);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b592c8 + 0x1b59158));
    func_0x01438628(*(undefined4 *)(_UNK_01b592cc + 0x1b59164));
    func_0x01438628(*(undefined4 *)(_UNK_01b592d0 + 0x1b59170));
    func_0x01438628(*(undefined4 *)(_UNK_01b592d4 + 0x1b5917c));
    func_0x01438628(*(undefined4 *)(_UNK_01b592d8 + 0x1b59188));
    func_0x01438628(*(undefined4 *)(_UNK_01b592dc + 0x1b59194));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa684,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b57128();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01b592e0 + 0x1b591fc));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b592e4 + 0x1b59214));
    func_0x024f108c(iVar1,uVar4,**(undefined4 **)(_UNK_01b592e8 + 0x1b5922c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar1 + 0xc);
    uVar5 = iVar7 - 1;
    if (-1 < (int)uVar5) {
      puVar8 = *(undefined4 **)(_UNK_01b592ec + 0x1b59258);
      puVar9 = *(undefined4 **)(_UNK_01b592f0 + 0x1b59260);
      do {
        iVar7 = FUN_01b57128(iVar7);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = func_0x0152983c(iVar1,uVar5,*puVar8);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        func_0x024f04d4(iVar7,uVar4,*puVar9);
        iVar2 = FUN_01b58f74();
        iVar7 = 0;
        if (iVar2 != 0) {
          iVar7 = FUN_01b59078();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 < 0x80000000);
    }
    return;
  }
  iVar1 = func_0x029540a4(0xa684,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar4 = 0;
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    uVar4 = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar4 = 1;
    }
  }
  iVar7 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  func_0x024f56d0(iVar7,uVar6,&uStack_30,uVar4,0,0);
  return;
}

