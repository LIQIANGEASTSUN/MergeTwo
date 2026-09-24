
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02e61f28(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02e62800 + 0x2e61f44);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e62804 + 0x2e61f58));
    func_0x01438628(*(undefined4 *)(_UNK_02e62808 + 0x2e61f64));
    func_0x01438628(*(undefined4 *)(_UNK_02e6280c + 0x2e61f70));
    func_0x01438628(*(undefined4 *)(_UNK_02e62810 + 0x2e61f7c));
    func_0x01438628(*(undefined4 *)(_UNK_02e62814 + 0x2e61f88));
    func_0x01438628(*(undefined4 *)(_UNK_02e62818 + 0x2e61f94));
    func_0x01438628(*(undefined4 *)(_UNK_02e6281c + 0x2e61fa0));
    func_0x01438628(*(undefined4 *)(_UNK_02e62820 + 0x2e61fac));
    func_0x01438628(*(undefined4 *)(_UNK_02e62824 + 0x2e61fb8));
    func_0x01438628(*(undefined4 *)(_UNK_02e62828 + 0x2e61fc4));
    func_0x01438628(*(undefined4 *)(_UNK_02e6282c + 0x2e61fd0));
    func_0x01438628(*(undefined4 *)(_UNK_02e62830 + 0x2e61fdc));
    func_0x01438628(*(undefined4 *)(_UNK_02e62834 + 0x2e61fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02e62838 + 0x2e61ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02e6283c + 0x2e62000));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x02953fd4(0x3fc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3fc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028789cc(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (param_2 < 0x32b) {
    if (0x259 < param_2) {
      if (param_2 < 0x2bf) {
        if (param_2 == 0x2bd) {
          if (*(int *)(**(int **)(_UNK_02e62880 + 0x2e624b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e62884 + 0x2e624d4));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x02ebea58(iVar1,0);
          return uVar2;
        }
        if (param_2 == 0x2be) {
          if (*(int *)(**(int **)(_UNK_02e6284c + 0x2e62260) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e62850 + 0x2e6227c));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x02eb6d70(iVar1,0);
          return uVar2;
        }
      }
      else {
        if (param_2 == 0x321) {
          iVar1 = func_0x01d90c54(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x01d9e4ac(iVar1,0);
          return uVar2;
        }
        if (param_2 == 0x32a) {
          iVar1 = func_0x01c988e8(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x01c99d70(iVar1,0);
          return uVar2;
        }
      }
      goto LAB_02e623c4;
    }
    if (0xc9 < param_2) {
      if (param_2 == 0xca) {
        if (*(int *)(**(int **)(_UNK_02e62864 + 0x2e6246c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e62868 + 0x2e62488));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x02ca48ec(iVar1,0);
        return uVar2;
      }
      if (param_2 == 0x259) {
        if (*(int *)(**(int **)(_UNK_02e62848 + 0x2e621d0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x02f190cc(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x02f1a688(iVar1,0);
        return uVar2;
      }
      goto LAB_02e623c4;
    }
    switch(param_2) {
    case 0x5a:
      if (*(int *)(**(int **)(&UNK_02e6273c + _UNK_02e62874) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x032a3fc4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x032a43a4(iVar1,0);
      break;
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5f:
    case 0x60:
    case 0x61:
      if (*(int *)(**(int **)(&UNK_02e62344 + _UNK_02e6287c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x032a3fc4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x032af2d8(iVar1,0);
      break;
    case 0x5e:
      if (*(int *)(**(int **)(&UNK_02e62780 + _UNK_02e62878) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_018f5b04(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_018f5ee4(iVar1,0);
      break;
    case 0x65:
    case 0x66:
      uVar2 = func_0x02e673e8(param_1,param_2);
      iVar1 = FUN_02e61c0c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0475561c(iVar1,uVar2,&iStack_14,
                              **(undefined4 **)(&UNK_02e626a4 + _UNK_02e62860));
      iVar1 = iStack_14;
      uVar2 = 0;
      if (iVar3 != 0) {
        if (iStack_14 == 0) {
          func_0x014388e4(0);
        }
        uVar2 = func_0x026ab3c8(iVar1,0);
      }
      break;
    case 0x68:
      iVar1 = FUN_02e61c0c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      break;
    case 0x69:
      iVar1 = func_0x02159b50(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x0215c5cc(iVar1,0);
      break;
    default:
      if (param_2 == 0xc9) {
        if (*(int *)(**(int **)(_UNK_02e62840 + 0x2e626f0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e62844 + 0x2e6270c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x02ca3350(iVar1,0);
        return uVar2;
      }
    case 0x62:
    case 99:
    case 100:
    case 0x67:
LAB_02e623c4:
      iVar1 = FUN_02e61d28(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x046c26fc(iVar1,param_2,**(undefined4 **)(_UNK_02e6288c + 0x2e623ec));
      uVar2 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_02e61d28(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x03b70fac(iVar1,param_2,**(undefined4 **)(_UNK_02e62890 + 0x2e6242c));
      }
    }
    return uVar2;
  }
  if (param_2 < 0x3a5) {
    if (param_2 < 0x332) {
      if (param_2 == 0x32f) {
        iVar1 = func_0x01c8d8d0(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x01c90edc(iVar1,0);
        return uVar2;
      }
      if (param_2 == 0x331) {
        iVar1 = func_0x01ca5be0(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x01ca60d8(iVar1,0);
        return uVar2;
      }
    }
    else if (param_2 < 0x389) {
      if (param_2 == 0x387) {
        if (*(int *)(**(int **)(_UNK_02e6286c + 0x2e625dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x01c5144c(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x01c52658(iVar1,0);
        return uVar2;
      }
      if (param_2 == 0x388) {
        if (*(int *)(**(int **)(_UNK_02e62854 + 0x2e62170) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_019e7f30(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = FUN_019eafd4(iVar1,0);
        return uVar2;
      }
    }
    else {
      if (param_2 == 0x389) {
        if (*(int *)(**(int **)(_UNK_02e62870 + 0x2e62620) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_017d0b50(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = FUN_017d0f30(iVar1,0);
        return uVar2;
      }
      if (param_2 == 0x3a4) {
        iVar1 = func_0x031e695c(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x031e8c74(iVar1,0);
        return uVar2;
      }
    }
  }
  else if (param_2 < 0x3af) {
    if (param_2 == 0x3a5) {
      iVar1 = FUN_01d39b00(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_01d3a3ec(iVar1,0);
      return uVar2;
    }
    if (param_2 - 0x3acU < 3) {
      if (*(int *)(**(int **)(_UNK_02e62858 + 0x2e62598) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_017d0b50(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_017dbfec(iVar1,0);
      return uVar2;
    }
  }
  else {
    if (param_2 == 0x3ba) {
      if (*(int *)(**(int **)(_UNK_02e62888 + 0x2e6252c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_01bc01cc(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_01bc02b8(iVar1,0);
      return uVar2;
    }
    if (param_2 == 0x3bd) {
      iVar1 = FUN_01b188f4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_01b1bb7c(iVar1,0);
      return uVar2;
    }
    if (param_2 == 0x3cb) {
      if (*(int *)(**(int **)(_UNK_02e6285c + 0x2e620ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_01ba1db8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = FUN_01ba8784(iVar1,0);
      return uVar2;
    }
  }
  goto LAB_02e623c4;
}

