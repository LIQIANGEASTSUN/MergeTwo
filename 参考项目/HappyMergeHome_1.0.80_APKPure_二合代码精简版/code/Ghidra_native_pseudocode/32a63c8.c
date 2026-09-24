
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b63c8(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = (char *)(_UNK_032b6460 + 0x32b63dc);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b6464 + 0x32b63f0));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  func_0x0505644c(&uStack_38,0);
  puVar2 = (undefined4 *)((uint)&uStack_28 | 4);
  *puVar2 = uStack_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  func_0x014385cc(puVar2,0);
  uStack_28 = 0xffffffff;
  func_0x035d3330(puVar2,&uStack_28,**(undefined4 **)(_UNK_032b6468 + 0x32b6448));
  return;
}

