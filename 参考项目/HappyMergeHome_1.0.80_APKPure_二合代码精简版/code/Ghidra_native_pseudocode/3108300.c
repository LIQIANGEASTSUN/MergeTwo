
/* WARNING: Possible PIC construction at 0x03118434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03118438) */
/* WARNING: Removing unreachable block (ram,0x03118444) */
/* WARNING: Removing unreachable block (ram,0x03118448) */
/* WARNING: Removing unreachable block (ram,0x03118470) */
/* WARNING: Removing unreachable block (ram,0x03118454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03118300(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_03118488 + 0x3118320);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311848c + 0x3118334));
    func_0x01438628(*(undefined4 *)(_UNK_03118490 + 0x3118340));
    func_0x01438628(*(undefined4 *)(_UNK_03118494 + 0x311834c));
    func_0x01438628(*(undefined4 *)(_UNK_03118498 + 0x3118358));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x78b4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0311849c + 0x31183bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031184a0 + 0x31183d8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          func_0x05187824(0,0,**(undefined4 **)(_UNK_031184a4 + 0x311842c));
        }
        iVar1 = *(int *)(iVar4 + 8);
        if (iVar1 == 0) {
          func_0x034a8a64();
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar1 + 0x10);
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x78b4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291a944(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

