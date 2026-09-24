
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c488f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_02c48a34 + 0x2c48908);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c48a38 + 0x2c4891c));
    func_0x01438628(*(undefined4 *)(_UNK_02c48a3c + 0x2c48928));
    func_0x01438628(*(undefined4 *)(_UNK_02c48a40 + 0x2c48934));
    func_0x01438628(*(undefined4 *)(_UNK_02c48a44 + 0x2c48940));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x48a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x48a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_028796a4 + 0x28795c4);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028796a8 + 0x28795d8),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028796ac + 0x2879694));
    return uVar6;
  }
  puVar3 = (undefined4 *)(param_1 + 0x14);
  uVar6 = *puVar3;
  if (*(int *)(**(int **)(_UNK_02c48a48 + 0x2c48998) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02c48a4c + 0x2c489d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c48a50 + 0x2c489ec));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x0285960c(iVar1,**(undefined4 **)(_UNK_02c48a54 + 0x2c48a14),0,0);
    *puVar3 = uVar6;
    func_0x014385cc(puVar3,uVar6);
  }
  return *puVar3;
}

