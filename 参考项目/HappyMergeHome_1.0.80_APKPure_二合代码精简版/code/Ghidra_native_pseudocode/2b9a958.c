
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02baa958(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02baabb0 + 0x2baa970);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baabb4 + 0x2baa984));
    func_0x01438628(*(undefined4 *)(_UNK_02baabb8 + 0x2baa990));
    func_0x01438628(*(undefined4 *)(_UNK_02baabbc + 0x2baa99c));
    func_0x01438628(*(undefined4 *)(_UNK_02baabc0 + 0x2baa9a8));
    func_0x01438628(*(undefined4 *)(_UNK_02baabc4 + 0x2baa9b4));
    func_0x01438628(*(undefined4 *)(_UNK_02baabc8 + 0x2baa9c0));
    func_0x01438628(*(undefined4 *)(_UNK_02baabcc + 0x2baa9cc));
    func_0x01438628(*(undefined4 *)(_UNK_02baabd0 + 0x2baa9d8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfd9,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02baabd4 + 0x2baaa30);
    iVar1 = **(int **)(*piVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0x78,0,0);
    if (iVar1 == 0) {
      uStack_1c = 0;
      if (*(int *)(**(int **)(_UNK_02baabd8 + 0x2baaa70) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02baabdc + 0x2baaa90));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02abe09c(iVar1,&uStack_1c,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02baabe0 + 0x2baaac8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02baabe4 + 0x2baaae4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02d0fe1c(iVar1,0);
        if (*(int *)(**(int **)(_UNK_02baabe8 + 0x2baab14) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02baabec + 0x2baab30));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x029b3f20(iVar2,**(undefined4 **)(_UNK_02baabf0 + 0x2baab54),0);
        if ((iVar2 <= iVar1) && (iVar1 = func_0x02baabf4(param_1), iVar1 != 0)) {
          iVar1 = **(int **)(*piVar4 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b6127c(iVar1,0x78,0,0,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xfd9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

