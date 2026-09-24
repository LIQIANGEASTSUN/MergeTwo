
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01908ca8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0190922c + 0x1908cc0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01909230 + 0x1908cd4));
    func_0x01438628(*(undefined4 *)(_UNK_01909234 + 0x1908ce0));
    func_0x01438628(*(undefined4 *)(_UNK_01909238 + 0x1908cec));
    func_0x01438628(*(undefined4 *)(_UNK_0190923c + 0x1908cf8));
    func_0x01438628(*(undefined4 *)(_UNK_01909240 + 0x1908d04));
    func_0x01438628(*(undefined4 *)(_UNK_01909244 + 0x1908d10));
    func_0x01438628(*(undefined4 *)(_UNK_01909248 + 0x1908d1c));
    func_0x01438628(*(undefined4 *)(_UNK_0190924c + 0x1908d28));
    func_0x01438628(*(undefined4 *)(_UNK_01909250 + 0x1908d34));
    func_0x01438628(*(undefined4 *)(_UNK_01909254 + 0x1908d40));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01909258 + 0x1908d58);
  iStack_28 = 0;
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar2 = FUN_018f8b90();
  if (*(int *)(**(int **)(_UNK_0190925c + 0x1908d80) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024eec50(uVar2,0,0);
  if (iVar3 == 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = FUN_018f8b90();
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x01914d60(iVar3,0);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_018f9460(iVar3,iVar9 * 6 + 6);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar3 + 0xc);
    if (*(int *)(**(int **)(_UNK_01909260 + 0x1908e3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x0152ae0c(0,iVar9 + -1,0);
    if (5 < iVar9) {
      puVar10 = *(undefined4 **)(_UNK_01909264 + 0x1908e84);
      do {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x0152983c(iVar3,iVar9,*puVar10);
        if (iVar4 != 0) {
          if (*(int *)(**(int **)(_UNK_01909268 + 0x1908eb0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0190926c + 0x1908ecc));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x0152983c(iVar3,iVar9,*puVar10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar5 + 0x24);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x0152983c(iVar3,iVar9,*puVar10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar5 + 0x24);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,uVar2,0xffffffff,10,0,0x18,uVar7,1,0xffffffff,0,0);
        }
        bVar1 = 6 < iVar9;
        iVar9 = iVar9 + -1;
      } while (bVar1);
    }
    iVar9 = 5;
    puVar10 = *(undefined4 **)(_UNK_01909270 + 0x1908f9c);
    do {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x0152983c(iVar3,iVar9,*puVar10);
      if (iVar4 != 0) {
        if (*(int *)(**(int **)(_UNK_01909274 + 0x1908fc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01909278 + 0x1908fe4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x0152983c(iVar3,iVar9,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar5 + 0x24);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x0152983c(iVar3,iVar9,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar5 + 0x24);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02bd2cf0(iVar4,uVar2,0xffffffff,1,0,0x18,uVar7,1,0xffffffff,0,0);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != -1);
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_018f9728(iVar3);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x026eee4c(iVar3,*(int *)(param_1 + 0xc) + *(int *)(iVar3 + 0x80),0);
    if (*(int *)(**(int **)(_UNK_0190927c + 0x19090ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x0202346c(0);
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = FUN_018f9728(iVar9);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iStack_28 = *(int *)(iVar9 + 0x80) * 100 + 800;
    uVar2 = func_0x01524ffc(&iStack_28,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar3,0x27b,uVar2,0,0,0,0);
    if (*(int *)(**(int **)(_UNK_01909280 + 0x19091a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = FUN_018f8b90();
    if (iVar3 != 0) {
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 == 0) {
        iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01909284 + 0x19091e0));
        func_0x0152e3ec(iVar9,param_1,**(undefined4 **)(_UNK_01909288 + 0x19091fc),0);
        *(int *)(param_1 + 0x10) = iVar9;
        func_0x014385cc((int *)(param_1 + 0x10),iVar9);
      }
      func_0x0191acf8(iVar3,iVar9,0);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined1 *)(iVar3 + 0x4a) = 0;
  }
  return;
}

