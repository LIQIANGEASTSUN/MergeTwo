
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01907bf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01907e48 + 0x1907c08);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01907e4c + 0x1907c1c));
    func_0x01438628(*(undefined4 *)(_UNK_01907e50 + 0x1907c28));
    func_0x01438628(*(undefined4 *)(_UNK_01907e54 + 0x1907c34));
    func_0x01438628(*(undefined4 *)(_UNK_01907e58 + 0x1907c40));
    func_0x01438628(*(undefined4 *)(_UNK_01907e5c + 0x1907c4c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01907e60 + 0x1907c64);
  iStack_1c = 0;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = FUN_018f8b90();
  if (*(int *)(**(int **)(_UNK_01907e64 + 0x1907c8c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x024eec50(uVar1,0,0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_018f8b90();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x01914d60(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = FUN_018f9460(iVar2,0xc);
    FUN_01902594(param_1,uVar1);
    iVar2 = FUN_018f9728(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x026eee4c(iVar2,*(int *)(iVar2 + 0x80) + 2,0);
    if (*(int *)(**(int **)(_UNK_01907e68 + 0x1907d54) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x0202346c(0);
    iVar3 = FUN_018f9728(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_1c = *(int *)(iVar3 + 0x80) * 100 + 800;
    uVar1 = func_0x01524ffc(&iStack_1c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar2,0x27b,uVar1,0,0,0,0);
    iVar2 = FUN_018f8b90();
    if (iVar2 != 0) {
      uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01907e6c + 0x1907e0c));
      func_0x0152e3ec(uVar1,param_1,**(undefined4 **)(_UNK_01907e70 + 0x1907e28),0);
      func_0x0191acf8(iVar2,uVar1,0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  return;
}

