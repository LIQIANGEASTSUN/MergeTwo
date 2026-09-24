
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bacc4c(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02baccc4 + 0x2bacc60);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baccc8 + 0x2bacc74));
    func_0x01438628(*(undefined4 *)(_UNK_02bacccc + 0x2bacc80));
    *pcVar2 = '\x01';
  }
  piVar1 = *(int **)(_UNK_02baccd0 + 0x2bacc98);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  (*(code *)&UNK_04e4a76c)(param_1,**(undefined4 **)(_UNK_02baccd4 + 0x2baccb8));
  return;
}

