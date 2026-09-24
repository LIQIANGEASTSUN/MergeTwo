/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.Env$$get_Instance RVA 0x21466f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021566f4(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar2 = (char *)(_UNK_02156778 + 0x2156704);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215677c + 0x2156718));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x261,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x261,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_021806f0 + 0x2180620);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021806f4 + 0x2180634),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar5,uVar3,&uStack_30,uVar4,0,0);
    uVar4 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021806f8 + 0x21806e0));
    return uVar4;
  }
  return **(undefined4 **)(**(int **)(_UNK_02156780 + 0x215676c) + 0x5c);
}



// ===== FAT.Merge.Env$$SetEnv RVA 0x214eef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215eef8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  pcVar3 = (char *)(_UNK_0215ef84 + 0x215ef0c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215ef88 + 0x215ef20));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x926e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x926e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  **(undefined4 **)(**(int **)(_UNK_0215ef8c + 0x215ef78) + 0x5c) = param_1;
  return;
}


