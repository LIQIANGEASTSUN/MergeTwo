
/* WARNING: Possible PIC construction at 0x0196bab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0196bab4) */
/* WARNING: Removing unreachable block (ram,0x0196bac0) */
/* WARNING: Removing unreachable block (ram,0x0196bac4) */
/* WARNING: Removing unreachable block (ram,0x0196bae0) */
/* WARNING: Removing unreachable block (ram,0x0196baf4) */
/* WARNING: Removing unreachable block (ram,0x0196baf8) */
/* WARNING: Removing unreachable block (ram,0x0196bb04) */
/* WARNING: Removing unreachable block (ram,0x0196bb08) */
/* WARNING: Removing unreachable block (ram,0x0196bb14) */
/* WARNING: Removing unreachable block (ram,0x0196bb18) */
/* WARNING: Removing unreachable block (ram,0x0196bad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0196b994(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_0196bb2c + 0x196b9ac);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196bb30 + 0x196b9c0));
    func_0x01438628(*(undefined4 *)(_UNK_0196bb34 + 0x196b9cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9939,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9939,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_029147f0 + 0x29146fc);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029147f4 + 0x2914710),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_029147f8 + 0x29147e0));
    return uVar5;
  }
  puVar6 = *(undefined4 **)(_UNK_0196bb38 + 0x196ba2c);
  iVar1 = FUN_019600b0(param_1);
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
    iVar1 = FUN_019600b0(param_1);
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
    uVar5 = (*(code *)&SUB_03b780b0)(iVar1,0,*puVar6);
    return uVar5;
  }
  return 0;
}

