
/* WARNING: Possible PIC construction at 0x02c26360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c26364) */
/* WARNING: Removing unreachable block (ram,0x02c263b0) */
/* WARNING: Removing unreachable block (ram,0x02c263b4) */
/* WARNING: Removing unreachable block (ram,0x024ef208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c261d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02c26454 + 0x2c261e8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c26458 + 0x2c261fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c2645c + 0x2c26208));
    func_0x01438628(*(undefined4 *)(_UNK_02c26460 + 0x2c26214));
    func_0x01438628(*(undefined4 *)(_UNK_02c26464 + 0x2c26220));
    func_0x01438628(*(undefined4 *)(_UNK_02c26468 + 0x2c2622c));
    func_0x01438628(*(undefined4 *)(_UNK_02c2646c + 0x2c26238));
    func_0x01438628(*(undefined4 *)(_UNK_02c26470 + 0x2c26244));
    func_0x01438628(*(undefined4 *)(_UNK_02c26474 + 0x2c26250));
    func_0x01438628(*(undefined4 *)(_UNK_02c26478 + 0x2c2625c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ef4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ef4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c2647c + 0x2c262b8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c26480 + 0x2c262d4));
  uVar5 = FUN_02c19900(param_1);
  uVar2 = FUN_02c0c0ac(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bad204(iVar1,uVar5,uVar2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 6) {
    FUN_02c23358(param_1,*(undefined4 *)(param_1 + 200),**(undefined4 **)(_UNK_02c26488 + 0x2c2633c)
                );
    uVar5 = **(undefined4 **)(_UNK_02c2648c + 0x2c2635c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
    uVar5 = **(undefined4 **)(_UNK_02c26484 + 0x2c26444);
  }
  (*(code *)&UNK_05d3fb3c)(param_1,uVar5,0);
  return;
}

