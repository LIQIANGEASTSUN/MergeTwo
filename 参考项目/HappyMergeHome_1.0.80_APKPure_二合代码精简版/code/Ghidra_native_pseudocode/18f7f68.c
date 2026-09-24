
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01907f68(void)

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
  
  pcVar1 = (char *)(_UNK_01908000 + 0x1907f7c);
  if (*pcVar1 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01908004 + 0x1907f90));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  func_0x024f1060(&uStack_38,0);
  puVar2 = (undefined4 *)((uint)&uStack_28 | 4);
  *puVar2 = uStack_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  func_0x014385cc(puVar2,0);
  uStack_28 = 0xffffffff;
  func_0x035d3448(puVar2,&uStack_28,**(undefined4 **)(_UNK_01908008 + 0x1907fe8));
  return;
}

