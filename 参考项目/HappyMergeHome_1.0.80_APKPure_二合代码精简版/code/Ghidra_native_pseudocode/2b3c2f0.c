
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c2f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02b4c520 + 0x2b4c308);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4c524 + 0x2b4c31c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c528 + 0x2b4c328));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c52c + 0x2b4c334));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c530 + 0x2b4c340));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c534 + 0x2b4c34c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c538 + 0x2b4c358));
    func_0x01438628(*(undefined4 *)(_UNK_02b4c53c + 0x2b4c364));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x2ee3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b4ed88();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02b4c540 + 0x2b4c3dc));
    iVar1 = func_0x03626668(uVar2,**(undefined4 **)(_UNK_02b4c544 + 0x2b4c3f0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_28,iVar1,**(undefined4 **)(_UNK_02b4c548 + 0x2b4c418));
    puVar5 = *(undefined4 **)(_UNK_02b4c54c + 0x2b4c42c);
    puVar3 = *(undefined4 **)(_UNK_02b4c550 + 0x2b4c434);
    while (iVar1 = func_0x04878f14(&uStack_28,*puVar5), uVar2 = uStack_1c, iVar1 != 0) {
      iVar1 = func_0x02b4ed88();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73d40(iVar1,uVar2,*puVar3);
      func_0x02b4ee90();
    }
    func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_02b4c554 + 0x2b4c480));
  }
  else {
    iVar1 = func_0x029540a4(0x2ee3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

