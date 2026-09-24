
/* WARNING: Possible PIC construction at 0x02c1e038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1e08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1e0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c33b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1e1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1e1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1e1bc) */
/* WARNING: Removing unreachable block (ram,0x02c1e1c8) */
/* WARNING: Removing unreachable block (ram,0x02c1e1cc) */
/* WARNING: Removing unreachable block (ram,0x02c1e1e4) */
/* WARNING: Removing unreachable block (ram,0x02c1e1e8) */
/* WARNING: Removing unreachable block (ram,0x02c33b10) */
/* WARNING: Removing unreachable block (ram,0x02c33b14) */
/* WARNING: Removing unreachable block (ram,0x02c33b18) */
/* WARNING: Removing unreachable block (ram,0x02c33b1c) */
/* WARNING: Removing unreachable block (ram,0x02c33b24) */
/* WARNING: Removing unreachable block (ram,0x02c33b30) */
/* WARNING: Removing unreachable block (ram,0x02c33b3c) */
/* WARNING: Removing unreachable block (ram,0x02c33b4c) */
/* WARNING: Removing unreachable block (ram,0x02c33b58) */
/* WARNING: Removing unreachable block (ram,0x02c33b5c) */
/* WARNING: Removing unreachable block (ram,0x02c33b74) */
/* WARNING: Removing unreachable block (ram,0x02c33b78) */
/* WARNING: Removing unreachable block (ram,0x02c33b48) */
/* WARNING: Removing unreachable block (ram,0x02c33b20) */
/* WARNING: Removing unreachable block (ram,0x02c1e0f8) */
/* WARNING: Removing unreachable block (ram,0x02c33a80) */
/* WARNING: Removing unreachable block (ram,0x02c33ad4) */
/* WARNING: Removing unreachable block (ram,0x02c33ae0) */
/* WARNING: Removing unreachable block (ram,0x02c33ae4) */
/* WARNING: Removing unreachable block (ram,0x02c33afc) */
/* WARNING: Removing unreachable block (ram,0x02c33b00) */
/* WARNING: Removing unreachable block (ram,0x02c33aa0) */
/* WARNING: Removing unreachable block (ram,0x02c33ab8) */
/* WARNING: Removing unreachable block (ram,0x02c33abc) */
/* WARNING: Removing unreachable block (ram,0x0286c1e8) */
/* WARNING: Removing unreachable block (ram,0x0286c240) */
/* WARNING: Removing unreachable block (ram,0x0286c24c) */
/* WARNING: Removing unreachable block (ram,0x0286c288) */
/* WARNING: Removing unreachable block (ram,0x0286c28c) */
/* WARNING: Removing unreachable block (ram,0x0286c298) */
/* WARNING: Removing unreachable block (ram,0x0286c29c) */
/* WARNING: Removing unreachable block (ram,0x02c1e090) */
/* WARNING: Removing unreachable block (ram,0x02c1e09c) */
/* WARNING: Removing unreachable block (ram,0x02c1e0a0) */
/* WARNING: Removing unreachable block (ram,0x02c1e0c0) */
/* WARNING: Removing unreachable block (ram,0x02c1e0cc) */
/* WARNING: Removing unreachable block (ram,0x02c1e0d0) */
/* WARNING: Removing unreachable block (ram,0x02c1e0d8) */
/* WARNING: Removing unreachable block (ram,0x02c1e0dc) */
/* WARNING: Removing unreachable block (ram,0x02c1e0e4) */
/* WARNING: Removing unreachable block (ram,0x02c1e0e8) */
/* WARNING: Removing unreachable block (ram,0x02c1e03c) */
/* WARNING: Removing unreachable block (ram,0x02c1e048) */
/* WARNING: Removing unreachable block (ram,0x02c1e04c) */
/* WARNING: Removing unreachable block (ram,0x02c1e070) */
/* WARNING: Removing unreachable block (ram,0x02c1e074) */
/* WARNING: Removing unreachable block (ram,0x02c1e1f8) */
/* WARNING: Removing unreachable block (ram,0x02c1e204) */
/* WARNING: Removing unreachable block (ram,0x02c1e208) */
/* WARNING: Removing unreachable block (ram,0x02c1e220) */
/* WARNING: Removing unreachable block (ram,0x02c1e224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1df48(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c1e238 + 0x2c1df5c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1e23c + 0x2c1df70));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f9c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f9c,0);
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
  if (*(char *)(param_1 + 0x50c) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x4d8);
    if (*(int *)(**(int **)(_UNK_02c1e240 + 0x2c1e11c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x4d8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eecb8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eff78(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4d8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eecb8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eff78(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = 1;
  }
  (*(code *)&UNK_05d3ec04)(iVar1,uVar5,0);
  return;
}

