
/* WARNING: Possible PIC construction at 0x03282338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0328233c) */
/* WARNING: Removing unreachable block (ram,0x03282348) */
/* WARNING: Removing unreachable block (ram,0x0328234c) */
/* WARNING: Removing unreachable block (ram,0x03282374) */
/* WARNING: Removing unreachable block (ram,0x03282358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03282204(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0328238c + 0x3282224);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03282390 + 0x3282238));
    func_0x01438628(*(undefined4 *)(_UNK_03282394 + 0x3282244));
    func_0x01438628(*(undefined4 *)(_UNK_03282398 + 0x3282250));
    func_0x01438628(*(undefined4 *)(_UNK_0328239c + 0x328225c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8177,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032823a0 + 0x32822c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032823a4 + 0x32822dc));
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
          func_0x05187824(0,0,**(undefined4 **)(_UNK_032823a8 + 0x3282330));
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
    iVar1 = func_0x029540a4(0x8177,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0291f744(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

